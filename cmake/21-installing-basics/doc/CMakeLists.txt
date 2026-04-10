find_package(Doxygen)

if(DOXYGEN_FOUND)
    set(DOXYFILE_INPUT "${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in")
    set(DOXYFILE_OUTPUT "${CMAKE_BINARY_DIR}/Doxyfile")

    configure_file("${DOXYFILE_INPUT}" "${DOXYFILE_OUTPUT}")

    add_custom_target(GenerateDocumentation
            COMMAND Doxygen::doxygen ${DOXYFILE_OUTPUT}
            WORKING_DIRECTORY "${CMAKE_BINARY_DIR}")
endif()