#include "projections.h"

double display_task(void) {
	printf("We will be calculating the height of impact and duration of a projectile's flight to a target given inputs of theta (angle of elevation in radians), distance to target, and the projectile's velocity.\n");
}
double get_theta(void) {
	double theta = 0.0;
	printf("Please enter theta (radians) of elevation: ");
	scanf("%lf", &theta);
	return theta;
}

double get_distance(void) {
	double distance = 0.0;
	printf("Please enter distance to target in feet: ");
	scanf("%lf", &distance);
	return distance;
}
double get_velocity(void) {
	double velocity = 0.0;
	printf("Please enter projectile's velocity (ft/s): ");
	scanf("%lf", &velocity);
	return velocity;
}
double calculate_time(double distance, double velocity, double theta) {
	return (distance) / (velocity * cos(theta));
}
double calculate_height(double velocity, double theta, double time) {
	return (velocity * sin(theta) * time) - ((G * pow(time, 2)) / 2);
}
double display_time(double time) {
	printf("Duration to reach target: %lf\n", time);
}
double display_height(double height) {
	printf("Height of impact: %lf\n", height);
}