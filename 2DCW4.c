/*Input 3 exam marks of 3 students and display in which exam students achievement is better in average*/
#include <stdio.h>

int main() {
    int marks[3][3]; // 3 students, 3 exams
    float exam_avg[3]; // Average marks for each exam
    int student, exam;

    // Input marks for each student
    for (student = 0; student < 3; student++) {
        printf("Enter marks for Student %d (3 exams):\n", student + 1);
        for (exam = 0; exam < 3; exam++) {
            printf("Exam %d: ", exam + 1);
            scanf("%d", &marks[student][exam]);
        }
    }

    // Calculate average marks for each exam
    for (exam = 0; exam < 3; exam++) {
        int sum = 0;
        for (student = 0; student < 3; student++) {
            sum += marks[student][exam];
        }
        exam_avg[exam] = sum / 3.0; // Average marks for the exam
    }

    // Find the exam with the highest average
    int best_exam = 0;
    for (exam = 1; exam < 3; exam++) {
        if (exam_avg[exam] > exam_avg[best_exam]) {
            best_exam = exam;
        }
    }

    // Display results
    printf("\nAverage marks for each exam:\n");
    for (exam = 0; exam < 3; exam++) {
        printf("Exam %d: %.2f\n", exam + 1, exam_avg[exam]);
    }
    printf("\nThe exam with the best average marks is Exam %d (%.2f average marks).\n", best_exam + 1, exam_avg[best_exam]);

    return 0;
}
