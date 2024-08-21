/**
 * @file main.cpp
 * @brief The main file and entry point of the project.
 *
 * @author Harry Boyd - https://github.com/HBoyd255
 * @date 2024-07-29
 * @copyright Copyright (c) 2024
 */

//  ██████╗ ██████╗  ██████╗      ██╗███████╗ ██████╗████████╗
//  ██╔══██╗██╔══██╗██╔═══██╗     ██║██╔════╝██╔════╝╚══██╔══╝
//  ██████╔╝██████╔╝██║   ██║     ██║█████╗  ██║        ██║
//  ██╔═══╝ ██╔══██╗██║   ██║██   ██║██╔══╝  ██║        ██║
//  ██║     ██║  ██║╚██████╔╝╚█████╔╝███████╗╚██████╗   ██║
//  ╚═╝     ╚═╝  ╚═╝ ╚═════╝  ╚════╝ ╚══════╝ ╚═════╝   ╚═╝
//
//   █████╗    ██╗        ██╗   ███████╗   ███╗   ██╗
//  ██╔══██╗   ██║        ██║   ██╔════╝   ████╗  ██║
//  ███████║   ██║        ██║   █████╗     ██╔██╗ ██║
//  ██╔══██║   ██║        ██║   ██╔══╝     ██║╚██╗██║
//  ██║  ██║██╗███████╗██╗██║██╗███████╗██╗██║ ╚████║██╗
//  ╚═╝  ╚═╝╚═╝╚══════╝╚═╝╚═╝╚═╝╚══════╝╚═╝╚═╝  ╚═══╝╚═╝

// Ascii text generated at https://patorjk.com/software/taag/
// Font used - ANSI Shadow

#include <Arduino.h>

#include "infrared.h"
#include "systemInfo.h"

Infrared infraredIndex0 = Infrared(0);
Infrared infraredIndex1 = Infrared(1);
Infrared infraredIndex2 = Infrared(2);
Infrared infraredIndex3 = Infrared(3);

void setup() {
    Serial.begin(SERIAL_BAUD_RATE);

    infraredIndex0.setup();
    infraredIndex1.setup();
    infraredIndex2.setup();
    infraredIndex3.setup();
}

void loop() {
    Serial.print("Index 0:");
    Serial.print(infraredIndex0.read());
    Serial.print(" Index 1:");
    Serial.print(infraredIndex1.read());
    Serial.print(" Index 2:");
    Serial.print(infraredIndex2.read());
    Serial.print(" Index 3:");
    Serial.println(infraredIndex3.read());
}
