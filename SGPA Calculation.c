#include <stdio.h>
#include <math.h>
int main() {
    printf("          SGPA CALCULATION   ");
    int s;   // loop variable

    // full course names with codes
    char subject[10][80] = {
        "ICE 1111 - Fundamental of ICT",
        "ICE 1112 - ICT Lab",
        "EEE 1121 - Basic Electrical and Circuit Analysis",
        "EEE 1122 - Electrical Lab",
        "MATH 1141 - Differential and Integral Calculus",
        "PHY 1131 - Engineering Physics",
        "PHY 1132 - Physics Lab",
        "ENG 1151 - Technical Writing and Presentation",
        "ENG 1152 - Writing Lab",
        "HUM 1153 - Bangladesh Studies"
    };

    // credits of courses
    float credit[10] = {3, 1, 3, 1.5, 3, 3, 1.5, 2, 1, 2};

    float marks[10];
    float gradePoint[10];
    char *grade[10];

    float total = 0, sgpa;
    float totalCredit = 21;

    printf("\n Enter marks of all courses:\n");

    // input marks and calculate grade
    for(s = 0; s < 10; s++) {

        printf("%s: ", subject[s]);
        scanf("%f", &marks[s]);

        if(marks[s] >= 80) {
            grade[s] = "A+";
            gradePoint[s] = 4.00;
        }
        else if(marks[s] >= 75) {
            grade[s] = "A";
            gradePoint[s] = 3.75;
        }
        else if(marks[s] >= 70) {
            grade[s] = "A-";
            gradePoint[s] = 3.50;
        }
        else if(marks[s] >= 65) {
            grade[s] = "B+";
            gradePoint[s] = 3.25;
        }
        else if(marks[s] >= 60) {
            grade[s] = "B";
            gradePoint[s] = 3.00;
        }
        else if(marks[s] >= 55) {
            grade[s] = "B-";
            gradePoint[s] = 2.75;
        }
        else if(marks[s] >= 50) {
            grade[s] = "C+";
            gradePoint[s] = 2.50;
        }
        else if(marks[s] >= 45) {
            grade[s] = "C";
            gradePoint[s] = 2.25;
        }
        else if(marks[s] >= 40) {
            grade[s] = "D";
            gradePoint[s] = 2.00;
        }
        else {
            grade[s] = "F";
            gradePoint[s] = 0.00;
        }

        total = total + (gradePoint[s] * credit[s]);
    }

    // calculate SGPA
    //SGPA=∑Credits∑(Credit×Grade Point)​
    sgpa = total / totalCredit;

    printf("\n    1st Year 1st Semester Result     \n");

    for(s = 0; s < 10; s++) {
        printf("%s\nGrade: %s | Grade Point: %.2f\n\n",
               subject[s], grade[s], gradePoint[s]);
    }

    printf("Total SGPA = %.2f\n", sgpa);

    return 0;
}
