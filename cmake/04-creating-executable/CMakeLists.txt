cmake_minimum_required(VERSION 3.20)
project(ExampleApplication LANGUAGES CXX)

set(SOURCE_FILES
        main.cpp
        ExampleClass.cpp
        )

add_executable(Application ${SOURCE_FILES})
