#include "sensor.h"
#include <stdlib.h>

void Sensor_Init(void)
{
    /* In real ECU: ADC / CAN / Camera init */
    // Here: nothing to initialize
    // Just a placeholder
    // srand((unsigned int)time(NULL));
    // Seed moved to main.c
    // to ensure different sequences in each run
    // of the program
    // srand((unsigned int)time(NULL));
    // Seed the random number generator
    // to produce different random values
    // on each execution
    // This is down is main.c we make an simulation run
}

SensorData Sensor_Read(void)
{
    SensorData data;

    
    data.speed_kmph = rand() % 120;      // 0–159 km/h
    data.distance_cm = 20 + rand() % 200; // 20–220 cm

    return data;
}
