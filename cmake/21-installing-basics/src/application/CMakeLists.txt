aux_source_directory(. SOURCE_FILES)

add_executable(Application ${SOURCE_FILES})

target_link_libraries(Application PUBLIC MyLibrary)
target_link_libraries(Application PUBLIC Calculator)

target_compile_definitions(Application PRIVATE APP_PROJECT_VERSION="${CMAKE_PROJECT_VERSION}")
target_compile_definitions(Application PRIVATE APP_BUILD_MOD="$<CONFIG>")

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(Application PRIVATE /W4)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(Application PRIVATE -Wall -Werror)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(Application PRIVATE -Wall -Werror)
endif()

install(TARGETS Application
        RUNTIME DESTINATION bin)