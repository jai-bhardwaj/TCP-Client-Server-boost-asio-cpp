//
// Created by Jai Bhardwaj on 05/06/23.
//

#ifndef MUDONYOURFACE_TCP_CLIENT_H
#define MUDONYOURFACE_TCP_CLIENT_H

#include <boost/asio.hpp>
#include <queue>

namespace MOYF{
    namespace io = boost::asio;
    using MessageHandler = std::function<void(std::string)>;
    class TCPClient {
    public:
        TCPClient(const std::string& address, int port);

        void Run();

        void Stop();

        void Post(const std::string& message);

    private:
        void asyncRead();
        void onRead(const boost::system::error_code ec, size_t bytesTransferred);
        void asyncWrite();
        void onWrite(const boost::system::error_code ec, size_t bytesTransferred);

    public:
        MessageHandler OnMessage;

    private:
        io::io_context _ioContext {};
        io::ip::tcp::socket _socket;

        io::ip::tcp::resolver::results_type _endpoints;

        io::streambuf _streamBuf{65536};
        std::queue<std::string> _outgoingMessages {};

    };
}


#endif //MUDONYOURFACE_TCP_CLIENT_H
