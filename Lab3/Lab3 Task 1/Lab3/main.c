/*
* William Fralia
* CptS 121 Lab-18
* 9/13/2023
* 
* Lab 3: Calculate BMI using functions and a top-down design
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_weight(void);
double get_height(void);
double convert_feet_to_inches(double height_in_feet);
double calculate_bmi(double weight, double height_in_inches);
double display_bmi(double bmi);


int main(void) {
	double weight = 0.0, height_in_feet = 0.0, height_in_inches = 0.0, bmi = 0.0;
	weight = get_weight();
	height_in_feet = get_height();
	height_in_inches = convert_feet_to_inches(height_in_feet);
	bmi = calculate_bmi(weight, height_in_inches);
	display_bmi(bmi);
}

double get_weight(void) {
	double weight = 0.0;
	printf("Please enter your weight in pounds: ");
	scanf("%lf", &weight);
	return weight;
}

double get_height(void) {
	double height = 0.0;
	printf("\nPlease enter your height in feet: ");
	scanf("%lf", &height);
	return height;
}

double convert_feet_to_inches(double height_in_feet) {
	double inches = 0.0;
	inches = height_in_feet * 12;
	return inches;
}

double calculate_bmi(double weight, double height_in_inches) {
	return ((weight) / pow(height_in_inches, 2)) * 703;
}

double display_bmi(double bmi) {
	printf("\nYour BMI is %lf.", bmi);
}