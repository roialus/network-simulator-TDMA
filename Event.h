//
// Created by roi_1 on 07/03/2025.
//

#ifndef NETWORKSIM_EVENT_H
#define NETWORKSIM_EVENT_H

#include <string>
using namespace std;

class Event {
public: // Public members of the class Event are accessible from outside the class
    string EventType;   // Event type can be "SEND", "RECEIVE", "TRANSMIT", "COLLISION", "IDLE"
    int ScheduleTime;   // Time at which the event is scheduled to occur
    int SchedulingObjectID; // ID of the object that scheduled the event
    int TargetObjectID; // ID of the object that the event is targeted to
    int MessageID;  // ID of the message that the event is associated with
    int MessageSize;    // Size of the message in bytes randomly generated between 64 and 1518 bytes

    Event(string eventType, int scheduleTime, int schedulingObjectID, int targetObjectID, int messageID);

private:
    static int getRandomMessageSize();
};



#endif //NETWORKSIM_EVENT_H
