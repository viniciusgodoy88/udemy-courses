cmake_minimum_required(VERSION 3.20)
project(InstallingBasics LANGUAGES CXX VERSION 2.5.0)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(AddSanitizationOption)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_DEBUG_POSTFIX d)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out")

enable_testing()

add_custom_target(InstallClean
        COMMAND ${CMAKE_COMMAND} -E remove_directory "${CMAKE_INSTALL_PREFIX}"
        COMMAND ${CMAKE_COMMAND} --build . --target install
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )

add_custom_target(BuildAll
        COMMAND ${CMAKE_COMMAND} --build . --target all
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Building all..."
        )

add_custom_target(RunAllTests
        COMMAND ${CMAKE_COMMAND} --build . --target test
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        DEPENDS BuildAll
        COMMENT "Running tests..."
        )

add_subdirectory(src)
add_subdirectory(doc)

include(InstallRequiredSystemLibraries)
