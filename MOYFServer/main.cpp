#include <iostream>
#include "MOYFNetworking/server/tcp_server.h"
//#include <MOYFNetworking/tcp_connection.h>

int main(int argc, char* argv[]) {

    MOYF::TCPServer server{MOYF::IPV::V4, 1337};
    server.Run();
    return 0;
}
