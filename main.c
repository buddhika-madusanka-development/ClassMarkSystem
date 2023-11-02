// this small apllication about class marks management system. THis application can generate total marks and average marks

#include<stdio.h>

int main()
{
    // declaration varibales
    int marks, subjectCount, studentCount, total, i ,j;
    float average;

    printf("Student Count : ");
    scanf("%d", &studentCount);

    printf("Subject Count : ");
    scanf("%d", &subjectCount);
    printf("\n");

    int studentMatks[studentCount][subjectCount]; // this array for store student subject marks and total marks
    float studentAverages[studentCount]; // this array for store student average marks

    for(i =0 ; i <studentCount ; i++){

        printf("Student %d details : \n", i+1);

        for(j =0; j < subjectCount ;){

            printf("Subject %d mark : ", j+1);
            scanf("%d", &marks);

            // check marks are between 0 to 100
            if(0 <= marks && marks <= 100){
                studentMatks[i][j] = marks;
                total += marks;
                j++;
            }
            else{
                printf("Enter valid marks between 0 to 100.\n");
            }

        }

        average = (float)total / subjectCount;
        studentMatks[i][studentCount] = total;
        studentAverages[i] = average;

        printf("\n");
        total = 0;
    }

    for(i=0; i <studentCount; i++){
        printf("Student %d :- \n", i);

        for(j =0; j<subjectCount ; j++){

            if(j < subjectCount){
                printf("Subject %d mark : %d\n", j+1, studentMatks[i][j]);
            }
            else{
                printf("Total is : %d\n", studentMatks[i][j]);
            }
        }
        printf("Average is : %.2f\n\n", studentAverages[i]);
    }

    return 0;
}
