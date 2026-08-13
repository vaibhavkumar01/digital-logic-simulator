cmake_minimum_required(VERSION 3.20)

project(DigitalLogicSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(DigitalLogicSimulator)

target_sources(DigitalLogicSimulator
    PRIVATE
        src/main.cpp
        src/Gate.cpp
        src/AndGate.cpp
        src/OrGate.cpp
        src/NotGate.cpp
        src/NandGate.cpp
        src/NorGate.cpp
        src/XorGate.cpp
        src/XnorGate.cpp
        src/TruthTableGenerator.cpp
        src/Circuit.cpp
)

target_include_directories(DigitalLogicSimulator
    PRIVATE
        include
)

if(MSVC)
    target_compile_options(DigitalLogicSimulator PRIVATE /W4)
else()
    target_compile_options(DigitalLogicSimulator PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()