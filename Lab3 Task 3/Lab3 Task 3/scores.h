/*
* William Fralia
* CptS 121 Lab-18
* 9/13/2023
* 
* Lab 3 Task 3: Program first prompts the user for the scores received on two exams, two labs, 
* and two projects. The program must then compute separate averages for the exams,
* labs, and projects. Next, your program must weight the averages according to the following scaling (on lab).
* Then diplay total grade out of 100%.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_score(void);
double get_average(double score1, double score2);
double weigh_averages(double exam_average, double lab_average, double project_average);
void display_grade(double grade);