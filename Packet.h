//
// Created by roi_1 on 13/03/2025.
//

#ifndef NETWORKSIM_PACKET_H
#define NETWORKSIM_PACKET_H

#include <iostream>
#include <ctime>

class Packet {
public:
    int seq_num;    // Sequence number of the packet
    int src;        // Source of the packet
    int dst;        // Destination of the packet (sink)
    double data;       // Data of the packet (average of the samples)
//    time_t timestamp;   // Time of the packet creation
    double timestamp;

    Packet(int seq_num, int src, int dst, double data, double timestamp);   // Constructor of the packet

    void print_packet() const;  // Print the packet information, const because we don't want to change the packet

};


#endif //NETWORKSIM_PACKET_H
