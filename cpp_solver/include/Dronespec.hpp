#ifndef DRONESPEC_HPP
#define DRONESPEC_HPP

struct DroneSpec {
    int id;      // Unique drone identifier
    int sx, sy;  // Start coordinates
    int gx, gy;  // Goal (delivery) coordinates
    int deadline; // Latest time to deliver
};

#endif // DRONESPEC_HPP