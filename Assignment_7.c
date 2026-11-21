#include <stdio.h>

// Define the structure to store student details
struct Student {
    int rollNo;
    char name[50];
    float marks[3]; // Marks for 3 subjects
    float total;
    float percentage;
    char result[10]; // "Pass" or "Fail"
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Reads full name including spaces

        students[i].total = 0;
        int failedSubject = 0;

        printf("Enter marks for 3 subjects (out of 100):\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];

            // Assuming 35 is the minimum passing mark per subject
            if (students[i].marks[j] < 35) {
                failedSubject = 1;
            }
        }

        // Calculate percentage
        students[i].percentage = students[i].total / 3.0;

        // Determine Pass/Fail status
        if (failedSubject || students[i].percentage < 35.0) {
            sprintf(students[i].result, "Fail");
        } else {
            sprintf(students[i].result, "Pass");
        }
    }

    // Display results in a formatted table
    printf("\n=====================================================================\n");
    printf("%-10s %-20s %-10s %-12s %-10s\n", "Roll No", "Name", "Total", "Percentage", "Result");
    printf("=====================================================================\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-11.2f%% %-10s\n",
               students[i].rollNo,
               students[i].name,
               students[i].total,
               students[i].percentage,
               students[i].result);
    }
    printf("=====================================================================\n");

    return 0;
}
