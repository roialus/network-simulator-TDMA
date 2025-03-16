//
// Created by roi_1 on 07/03/2025.
//

#include "event.h"
#include <iostream>
#include <random>
using namespace std;

Event::Event(string eventType, int scheduleTime, int schedulingObjectID, int targetObjectID, int messageID) {
    EventType = eventType;
    ScheduleTime = scheduleTime;
    SchedulingObjectID = schedulingObjectID;
    TargetObjectID = targetObjectID;
    MessageID = messageID;
    MessageSize = getRandomMessageSize();
}

int Event::getRandomMessageSize() {
    random_device rd;   // obtain a random number from hardware
    mt19937 gen(rd());  // seed the generator
    uniform_int_distribution<> dis(64, 1518);   // define the range
    return dis(gen);    // generate numbers
}