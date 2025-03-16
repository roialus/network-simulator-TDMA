//
// Created by roi_1 on 13/03/2025.
//

#include "Packet.h"
#include <iostream>
#include <random>
using namespace std;

Packet::Packet(int seq_num, int src, int dst, double data, double timestamp){
    this->seq_num = seq_num;    // Sequence number of the packet
    this->src = src;    // Source of the packet
    this->dst = dst;    // Destination of the packet (sink)
    this->data = data;      // Data of the packet (average of the samples)
    this->timestamp = timestamp;    // Time of the packet creation
}

void Packet::print_packet() const {
    cout << "Packet: " << seq_num << " from: " << src << " to: " << dst << " data: " << data << " timestamp: " << timestamp << endl;
}

