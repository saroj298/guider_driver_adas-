cmake_minimum_required(VERSION 3.10)

project(adas_project C)
# 
set(CMAKE_C_STANDARD 99)

include_directories(inc)

add_executable(adas
    src/main.c
    src/sensor.c
    src/vehicle_logic.c
    src/warning.c
    src/seatbelt.c

)

