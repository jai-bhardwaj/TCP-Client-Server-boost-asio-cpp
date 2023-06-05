cmake_minimum_required(VERSION 3.25)
project(MOYFNetworking)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost 1.81.0 COMPONENTS system filesystem REQUIRED)

file(GLOB_RECURSE SOURCES src/*.cpp)
add_library(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
        PUBLIC
            $<INSTALL_INTERFACE:include>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#        PRIVATE
#            ${Boost_INCLUDE_DIRS}
        )
#target_link_libraries(${PROJECT_NAME}
#        PRIVATE
#            ${Boost_LIBRARIES}
#        )