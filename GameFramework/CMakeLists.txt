include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

#Creamos librería
#cambiar SHARED si fuera dinamica
#dar cpps 
add_library(GameFramework STATIC source/Entity.cpp source/Player.cpp source/Enemy.cpp source/Scene.cpp source/Component.cpp)

#dar include headers
target_include_directories(GameFramework PUBLIC include)

#librerías de las que esta librería es dependiente
target_link_libraries(GameFramework PRIVATE sfml-graphics)

if(WIN32)
    add_custom_command(
        TARGET GameFramework
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:GameFramework>
        VERBATIM)
endif()

