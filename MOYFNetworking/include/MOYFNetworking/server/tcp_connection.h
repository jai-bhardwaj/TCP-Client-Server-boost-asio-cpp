//
// Created by Jai Bhardwaj on 05/06/23.
//

#ifndef MUDONYOURFACE_TCP_CONNECTION_H
#define MUDONYOURFACE_TCP_CONNECTION_H

#include <boost/asio.hpp>
#include <iostream>
#include <queue>

namespace MOYF {
    using boost::asio::ip::tcp;
    namespace io = boost::asio;
class TCPConnection : public std::enable_shared_from_this<TCPConnection> {
    public:
        using pointer = std::shared_ptr<TCPConnection>;
        static pointer Create(io::ip::tcp::socket&& socket) {
            return pointer(new TCPConnection(std::move(socket)));
        }
        tcp::socket& Socket() {
            return _socket;
        }
        void Start();
        void Post(const std::string& message);

    private:
        explicit TCPConnection(io::ip::tcp::socket&& socket);

        // wait for a new message from the client
        void asyncRead();
        void onRead(boost::system::error_code ec, size_t bytesTransferred);

        void asyncWrite();
        void onWrite(boost::system::error_code ec, size_t bytesTransferred);
    private:
        tcp::socket _socket;
        std::string _username;
        std::queue<std::string> _outgoingMessages;
        io::streambuf _streamBuf {65536};
    };
}


#endif //MUDONYOURFACE_TCP_CONNECTION_H
