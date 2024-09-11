#include "projections.h"

int main(void) {
	double theta = 0.0, distance = 0.0, velocity = 0.0, time = 0.0, height = 0.0;

	display_task();
	theta = get_theta();
	distance = get_distance();
	velocity = get_velocity();
	time = calculate_time(distance, velocity, theta);
	height = calculate_height(velocity, theta, time);
	display_time(time);
	display_height(height);
}