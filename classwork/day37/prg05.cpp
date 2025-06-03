/*
Problem 1: Sensor Calibration (Using std::array)
Objective: You are given fixed-size temperature readings from 3 different sensors. Each reading needs to be calibrated using a fixed calibration factor and then averaged per sensor.

Requirements:

Use std::array<std::array<float, 5>, 3> to store 3 sensors, each with 5 readings.

Apply a calibration factor to each sensor:

Sensor 1: +0.5
Sensor 2: -0.3
Sensor 3: +1.2
Compute and display the average calibrated reading for each sensor.

Challenge Level: Intermediate Focus Areas: Nested std::array, range-based loops, type safety.



*/

#include <iostream>
#include <array>
using namespace std;
int main()
{

    std::array<std::array<float, 5>, 3> sensor_readings = {
        std::array<float, 5>{20.0, 21.0, 22.0, 20.5, 19.8},  // Sensor 1
        std::array<float, 5>{30.0, 30.2, 29.8, 30.1, 30.3},  // Sensor 2
        std::array<float, 5>{25.0, 26.0, 24.0, 25.5, 26.2}   // Sensor 3
    };

    float sum = 0;
std:array<float, 3> calibrate;
    for (int i = 0;i < 3;i++) {
        sum = 0.0;
        for (int j = 0;j < 5;j++) {
            switch (i)
            {
            case 0:
                sum += sensor_readings[i][j] + 0.5f;
                break;
            case 1:
                sum += sensor_readings[i][j] - 0.3f;
                break;
            case 2:
                sum += sensor_readings[i][j] + 1.2f;
                break;
            }

        }
        calibrate[i] = sum / 5.0;
    }

    for (int i = 0;i < 3;i++)
        cout << "Sensor " << (i + 1) << " Average(calibrated)" << calibrate[i] << endl;

    return 0;
}