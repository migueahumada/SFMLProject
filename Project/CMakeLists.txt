add_executable(Project main.cpp)

target_link_libraries(Project PUBLIC GameFramework)

target_link_libraries(Project PRIVATE sfml-graphics)

if(WIN32)
    add_custom_command(
        TARGET Project
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:Project>
        VERBATIM)
endif()