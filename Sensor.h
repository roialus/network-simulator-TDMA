//
// Created by roi_1 on 13/03/2025.
//

#ifndef NETWORKSIM_SENSOR_H
#define NETWORKSIM_SENSOR_H

#include "packet.h"
#include <vector>
#include <random>
#include <chrono>
#include <thread>
#include <iostream>
using namespace std;

class Sensor {
    private:
        int sensoe_id;  // ID of the sensor
        int time_slot;  // Time slot of the sensor
        int seq_num;   // Sequence number of the packet
        double sampling_rate;   // Sampling rate of the sensor
    public:
        Sensor(int sensor_id, int time_slot, double sampling_rate);   // Constructor of the sensor
        Packet create_packet();  // Create a packet with the sensor data
        void transmit_packet(vector<Packet> &buffer);  // Transmit the packet to the sink
        void run(vector<Packet> &buffer);  // Run the sensor
};




#endif //NETWORKSIM_SENSOR_H
