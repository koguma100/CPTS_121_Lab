#include "scores.h"

int main(void) {
	double exam1 = 0.0, exam2 = 0.0, exam_average = 0.0, lab1 = 0.0, lab2 = 0.0, lab_average; 
	double project1 = 0.0, project2 = 0.0, project_average = 0.0, grade = 0.0;

	printf("Please enter 2 exam scores, 2 lab scores, and 2 project scores to calculate grade.\n");
	printf("Exam Scores: \n");
	exam1 = get_score();
	exam2 = get_score();
	exam_average = get_average(exam1, exam2);

	printf("Lab Scores: \n");
	lab1 = get_score();
	lab2 = get_score();
	lab_average = get_average(lab1, lab2);

	printf("Project Scores: \n");
	project1 = get_score();
	project2 = get_score();
	project_average = get_average(project1, project2);

	grade = weigh_averages(exam_average, lab_average, project_average);
	display_grade(grade);
}