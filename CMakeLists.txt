cmake_minimum_required(VERSION 3.10)
project(DistributedTaskScheduler)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/TaskQueue.cpp
    src/Server.cpp
    src/Client.cpp
    src/Database.cpp
    src/ThreadPool.cpp
    main.cpp
)

# Executable
add_executable(DistributedTaskScheduler ${SOURCES})
