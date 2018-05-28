typedef int boolean;
// Header file


float saturateThrottle(float throttleIn, boolean *saturate);
float regulateThrottle(boolean isGoingOn, float cruiseSpeed, float vehicleSpeed);
int outCount();

