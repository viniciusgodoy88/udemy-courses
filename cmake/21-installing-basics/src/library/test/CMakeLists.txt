set(TEST_FILES ServerProviderTests.cpp)

find_package(GTest CONFIG REQUIRED)

add_executable(ServerProviderTests ${TEST_FILES})

target_link_libraries(ServerProviderTests PRIVATE GTest::gmock_main)
target_link_libraries(ServerProviderTests PRIVATE MyLibrary)

add_test(NAME ServerProviderTests
        COMMAND ServerProviderTests --gtest_output=xml:${CMAKE_BINARY_DIR}/TestResult/ServerProviderTests.xml
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})