# TCP Networking Project

This project is a TCP networking implementation that includes a TCP server and client for communication over a network. It allows multiple clients to connect to the server and exchange messages.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Introduction

The TCP Networking Project provides a scalable and reliable TCP-based networking solution. It allows clients to connect to a central server and communicate with each other using TCP/IP protocols. The project is written in C++ and utilizes the Boost.Asio library for handling network operations.

## Features

- TCP server that accepts incoming client connections
- Asynchronous communication between the server and clients
- Message broadcasting: The server can broadcast messages to all connected clients
- Client-server messaging: Clients can send messages to the server, which can then distribute them to the appropriate recipients
- Error handling: Graceful handling of errors and disconnections

## Installation

To use the TCP Networking Project, follow these steps:

1. Clone the project repository from GitHub: [repository-link]([https://github.com/jai-bhardwaj/TCP-Client-Server-boost-asio-cpp/new/main?readme=1])

2. Install the required dependencies. This project relies on Boost.Asio library, which can be installed following the instructions provided in the official Boost documentation: [Boost.Asio installation guide](https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio/overview/core/installation.html)

3. Build the project using a C++ compiler. You can use CMake or any other build system of your choice. Refer to the project's README or build instructions for detailed steps.

## Usage

1. Start the TCP server by running the server executable. Specify the IP address and port number to bind the server to.

   ```shell
   $ ./server [ip-address] [port]
   ```
2. Start the TCP client by running the client executable. Provide the server's IP address and port number to establish a connection.
   ```shell
   $ ./client [server-ip-address] [server-port]
   ```
3. Once the client is connected, you can start sending messages to the server or receive messages from other clients.

   Example usage:

   ```shell
   $ ./client 127.0.0.1 1337
   Connected to server.
   Enter your message: Hello, server!
   Message sent successfully.
   ```
4. The server will handle incoming messages and distribute them to the appropriate clients.

## Example

![Image Description](https://i.ibb.co/1LLpQ6T/Screenshot-2023-06-12-at-11-58-18-AM.png)

## Contributing

Contributions to the TCP Networking Project are welcome! If you want to contribute, please follow these guidelines:

1. Fork the project repository and create a new branch for your feature or bug fix.
2. Ensure your code follows the project's coding style and conventions.
3. Write clear and concise commit messages.
4. Submit a pull request to the main repository with a detailed description of your changes.
