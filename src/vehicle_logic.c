#include "vehicle_logic.h"
// Vehicle Logic Implementation
#define SPEED_LIMIT_KMPH     120
#define COLLISION_DIST_CM    40
// Process sensor data and determine vehicle state
VehicleState VehicleLogic_Process(const SensorData* data)
{
    if (data->distance_cm < COLLISION_DIST_CM) {
        return VEHICLE_STATE_COLLISION_RISK;
    }

    if (data->speed_kmph > SPEED_LIMIT_KMPH) {
        return VEHICLE_STATE_OVERSPEED;
    }
// Default to normal state
    return VEHICLE_STATE_NORMAL;
}
