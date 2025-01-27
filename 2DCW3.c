/*Input 3 exam marks of 3 students and displays the average average marks, median marks, of each student*/
#include <stdio.h>

// Function to calculate the median of three marks
float calculate_median(int marks[]) {
    int temp;
    // Sort the marks array in ascending order
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (marks[i] > marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    // Return the middle element (median)
    return marks[1];
}

int main() {
    int marks[3][3]; // 3 students, 3 exams
    float avg_marks[3];  // Average marks of each student
    float median_marks[3]; // Median marks of each student

    // Input marks for each student
    for (int student = 0; student < 3; student++) {
        printf("Enter marks for Student %d (3 exams):\n", student + 1);
        for (int exam = 0; exam < 3; exam++) {
            printf("Exam %d: ", exam + 1);
            scanf("%d", &marks[student][exam]);
        }
    }

    // Calculate average and median marks for each student
    for (int student = 0; student < 3; student++) {
        int sum = 0;
        for (int exam = 0; exam < 3; exam++) {
            sum += marks[student][exam];
        }
        avg_marks[student] = sum / 3.0; // Average
        median_marks[student] = calculate_median(marks[student]); // Median
    }

    // Display results
    printf("\nResults:\n");
    for (int student = 0; student < 3; student++) {
        printf("Student %d:\n", student + 1);
        printf("Average Marks: %.2f\n", avg_marks[student]);
        printf("Median Marks: %.2f\n", median_marks[student]);
    }

    return 0;
}
