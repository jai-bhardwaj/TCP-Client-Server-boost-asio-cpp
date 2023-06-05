cmake_minimum_required(VERSION 3.25)
project(MudOnYourFace)

set(CMAKE_CXX_STANDARD 20)

set(BOOST_ROOT /opt/homebrew/Cellar/boost/1.81.0_1)
set(BOOST_INCLUDEDIR /opt/homebrew/Cellar/boost/1.81.0_1/include)
set(BOOST_LIBRARY_DIR /opt/homebrew/Cellar/boost/1.81.0_1/lib)

find_package(Boost 1.81.0 COMPONENTS system filesystem REQUIRED)

include_directories(${Boost_INCLUDE_DIR})

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()

add_subdirectory(MOYFNetworking)
add_subdirectory(MOYFClient)
add_subdirectory(MOYFServer)
