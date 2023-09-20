cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# Description and Meta Info

set(RINHA_COMPILER_NAME	"soulrinha")
set(RINHA_COMPILER_DESCRIPTION "A simple compiler written in C++ to rinha-de-compilers by aripiprazole")
set(RINHA_COMPILER_AUTHOR_DOMAIN "https://github.com/mr-soulfox/rinha-de-compiladores-cpp")
set(RINHA_COMPILER_VERSION_MAJOR "0")
set(RINHA_COMPILER_VERSION_MINOR "0")
set(RINHA_COMPILER_VERSION_PATCH "1")

set(RINHA_COMPILER_VERSION "${RINHA_COMPILER_VERSION_MAJOR}.${RINHA_COMPILER_VERSION_MINOR}.${RINHA_COMPILER_VERSION_PATCH}")
set(RINHA_COMPILER_NAME_VERSION "${RINHA_COMPILER_VERSION_MAJOR} v${RINHA_COMPILER_VERSION_MINOR} (${RINHA_COMPILER_VERSION_PATCH})")

set(RINHA_COMPILER_SRC_DIR ${PROJECT_SOURCE_DIR}/src)

# Declare
project(${RINHA_COMPILER_NAME})
add_subdirectory(src)

# Dependencies

include(cmake/CPM.cmake)
CPMAddPackage(
  NAME nlohmann_json
  GITHUB_REPOSITORY nlohmann/json
  VERSION 3.9.1
)
