cmake_minimum_required(VERSION 3.16)

project(lab1_ahiienko_312 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab1_ahiienko_312 main.cpp)

include(GNUInstallDirs)
install(TARGETS lab1_ahiienko_312
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
