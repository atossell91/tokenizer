cmake_minimum_required(VERSION 3.11.2)

project(Tokenizer)

set(SRC ${CMAKE_SOURCE_DIR}/src/)
set(INC ${CMAKE_SOURCE_DIR}/include/)

include_directories(${INC})

set(SRCS
    ${SRC}/main.cpp
    ${SRC}/TrieBuilder.cpp
    ${SRC}/TokenBuffer.cpp
    ${SRC}/Tokenizer.cpp
    )

add_executable(tokenizer ${SRCS})
