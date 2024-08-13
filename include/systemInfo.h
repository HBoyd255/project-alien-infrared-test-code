/**
 * @file systemInfo.h
 * @brief Definition for constant values related to the hardware setup for the
 * infrared sensors and the i2c multiplexer.
 *
 * @author Harry Boyd - https://github.com/HBoyd255
 * @date 2024-08-13
 * @copyright Copyright (c) 2024
 */

#ifndef SYSTEM_INFO_H
#define SYSTEM_INFO_H

// Serial
#define SERIAL_BAUD_RATE 230400

// Infrared
#define LEFT_INFRARED_INDEX 0
#define LEFT_INFRARED_FORWARD_DISTANCE 85

#define RIGHT_INFRARED_INDEX 1
#define RIGHT_INFRARED_FORWARD_DISTANCE 85

#define FRONT_LEFT_INFRARED_INDEX 2
#define FRONT_LEFT_INFRARED_FORWARD_DISTANCE 64

#define FRONT_RIGHT_INFRARED_INDEX 3
#define FRONT_RIGHT_INFRARED_FORWARD_DISTANCE 64

#endif  // SYSTEM_INFO_H