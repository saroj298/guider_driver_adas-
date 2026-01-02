#ifndef VEHICLE_LOGIC_H
#define VEHICLE_LOGIC_H

#include "sensor.h"
#include <stdint.h>

typedef enum {
    VEHICLE_STATE_NORMAL,
    VEHICLE_STATE_OVERSPEED,
    VEHICLE_STATE_COLLISION_RISK
} VehicleState;

/* API */
VehicleState VehicleLogic_Process(const SensorData* data);

#endif
