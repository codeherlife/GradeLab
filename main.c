//
//  Name this file: grade.c
//  GradeLab
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Grade Lab;
//  Date: 10/03/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//

#include <stdio.h>
FILE *fp;

void calculateAverage(void);

int main(void) {
    int i;
    
    fp = fopen("csis.txt", "w");
    for (i = 1; i <= 4; ++i){
        calculateAverage();
    }
    fclose(fp);
    return 0;
}

void calculateAverage(){
    int numbersInputed = 0;
    double sum = 0;
    double average = 0;
    int sentinel = 0;
    
    while (sentinel != -1)
    {
        printf(     "Enter the grade: \n");
        fprintf(fp, "Enter the grade: \n");
        scanf(      "%d", &sentinel);
        printf(     "You entered: %d \n", sentinel);
        fprintf(fp, "You entered: %d \n", sentinel);
        
        if(sentinel == -1)
        {
            break;
        }

        numbersInputed++;
        sum += sentinel;
    }
    if (numbersInputed){
        average = sum / numbersInputed;
        printf(     "The average is: %.2lf \n", average);
        fprintf(fp, "The average is: %.2lf \n", average);
    } else {
        printf(     "No valid grades inputed \n");
    }
    
    return;
}
