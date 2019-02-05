cmake_minimum_required(VERSION 3.5)
project(lrvalues)

set(LRVALUES_MAJOR_VERSION 1)
set(LRVALUES_MINOR_VERSION 0)

set(SOURCES "${PROJECT_SOURCE_DIR}/source/main.cpp")

add_executable(lrvalue ${SOURCES})