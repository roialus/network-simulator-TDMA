//
// Created by roi_1 on 13/03/2025.
//

#ifndef NETWORKSIM_SINK_H
#define NETWORKSIM_SINK_H

#include <iostream>
#include <vector>
#include "Packet.h"
using namespace std;


class Sink {
    private:
        int id; // ID of the sink
        int num_of_packets; // Number of packets received
        vector<Packet> packets; // Vector of packets received
    public:
        Sink(int id = 0); // Constructor
        void receive_packet(Packet packet); // Receive a packet from the sensor
        void sort_packets(); // Sort the packets by their sequence number
        void print_by_order(); // Print the packets by their order
        void print_by_id(); // Print the packets by sensor ID
    //    void ACK(); // Send an ACK to the sensor
};


#endif //NETWORKSIM_SINK_H
