#include "scores.h"

double get_score(void) {
	double score = 0.0;
	printf("Score(%%): ");
	scanf("%lf", &score);
	return score;
}
double get_average(double score1, double score2) {
	return (score1 + score2) / 2.0;
}
double weigh_averages(double exam_average, double lab_average, double project_average) {
	double total = 0.0;
	total = (exam_average * 0.6) + (lab_average * 0.1) + (project_average * 0.3);
	return total;
}
void display_grade(double grade) {
	printf("Grade: %.2lf%%", grade);
}