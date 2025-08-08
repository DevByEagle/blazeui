cmake_minimum_required(VERSION 3.16)
project(BlazeUI VERSION 1.0.0 LANGUAGES CXX)

# === OPTIONS ===
option(BUILD_SHARED_LIBS "Build shared library" OFF)
option(BUILD_EXAMPLES "Build example programs" ON)

# === CONFIGURATION ===
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# === SOURCES ===
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    src/*.cpp
)

include_directories(include)

add_library(BlazeUI ${SOURCES})
target_precompile_headers(BlazeUI PRIVATE src/pch.h)

if(BUILD_SHARED_LIBS)
    if(WIN32)
        set_target_properties(BlazeUI PROPERTIES PREFIX "")
        # target_compile_definitions(BlazeUI PRIVATE BLAZEUI_BUILD_DLL)
        target_compile_definitions(BlazeUI
            PRIVATE $<BUILD_INTERFACE:BLAZEUI_BUILD_DLL>
            INTERFACE $<INSTALL_INTERFACE:BLAZEUI_USE_DLL>
        )
    endif()
    set_target_properties(BlazeUI PROPERTY POSITION_INDEPENDENT_CODE ON)
endif()

target_include_directories(BlazeUI
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()