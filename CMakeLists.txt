cmake_minimum_required(VERSION 3.26)
project(lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2 main.cpp
        Database.cpp
        Database.h
        User.cpp
        User.h
        Watch.cpp
        Watch.h
        Menu.cpp
        Menu.h
        ConsoleApp.cpp
        ConsoleApp.h
        Constants.h
        Constants.cpp)
