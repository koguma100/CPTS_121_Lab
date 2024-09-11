/*
* William Fralia
* CptS 121 Lab-18
* 9/13/2023
*
* Lab 3 Task 2: computes the duration of a projectile's flight and its height
above the ground when it reaches the target
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define G 32.17

double display_task(void);
double get_theta(void);
double get_distance(void);
double get_velocity(void);
double calculate_time(double distance, double velocity, double theta);
double calculate_height(double velocity, double theta, double time);
double display_time(double time);
double display_height(double height);
