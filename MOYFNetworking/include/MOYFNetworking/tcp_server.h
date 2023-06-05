//
// Created by Jai Bhardwaj on 05/06/23.
//

#ifndef MUDONYOURFACE_TCP_SERVER_H
#define MUDONYOURFACE_TCP_SERVER_H

#include <iostream>
#include <vector>
#include <boost/asio.hpp>
#include <MOYFNetworking/tcp_connection.h>

namespace MOYF {
    enum class IPV {
        V4,
        V6
    };
    class TCPServer {

    public:
        TCPServer(IPV ipv, int port);

        int Run();

    private:
        void startAccept();

    private:
        IPV _ipVersion;
        int _port;

        boost::asio::io_context _ioContext;
        boost::asio::ip::tcp::acceptor _acceptor;

        std::vector<TCPConnection::pointer> _connections {};
    };
}


#endif //MUDONYOURFACE_TCP_SERVER_H
