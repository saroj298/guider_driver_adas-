#ifndef SENSOR_H
#define SENSOR_H

#include <stdint.h>

/* Simulated sensor data */
typedef struct {
    uint16_t speed_kmph;
    uint16_t distance_cm;
} SensorData;

/* API */

void Sensor_Init(void);
SensorData Sensor_Read(void);


#endif
