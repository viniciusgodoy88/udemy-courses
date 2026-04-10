find_package(GTest CONFIG REQUIRED)

aux_source_directory(. TEST_FILES)

add_executable(CalculatorTests ${TEST_FILES})

target_link_libraries(CalculatorTests PRIVATE GTest::gmock_main)
target_link_libraries(CalculatorTests PRIVATE Calculator)

add_test(NAME CalculatorTestsUT
        COMMAND CalculatorTests --gtest_output=xml:${CMAKE_BINARY_DIR}/TestResult/CalculatorTests.xml
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})