//
// Created by roi_1 on 13/03/2025.
//

#include "Sensor.h"
#include "Timeline.h"

// Constructor
Sensor :: Sensor(int id, int slot, double rate) : sensor_id(id), time_slot(slot), sampling_rate(rate) {
    seq_num = 0;    // Initialize the sequence number of the packet
}

Packet Sensor :: create_packet() {
    random_device rd;   // Obtain a random number from hardware
    mt19937 gen(rd());  // Seed the generator
    uniform_real_distribution<> dis(0, 100);    // Define the range
    timestep = Timeline::get_current_time();    // Get the current time from the discrete event simulator

    return Packet(seq_num++, sensor_id, 0, dis(gen), timestep);   // Create a packet with the sensor data
}

void Sensor :: transmit_packet(vector<Packet> &buffer) {    // Transmit the packet to the sink
    Packet packet = create_packet();    // Create a packet with the sensor data
    buffer.push_back(packet);   // Push the packet to the buffer
    cout << "Sensor " << sensor_id << " transmitted packet " << packet.seq_num << " at time " << timestep << endl;
}
//
//void Sensor :: run(vector<Packet> &buffer) {    // Run the sensor
//    while (true) {
//        transmit_packet(buffer);    // Transmit the packet to the sink
//        this_thread::sleep_for(chrono::milliseconds(1000 / sampling_rate));    // Sleep for the sampling rate
//    }
//}

