#include<stdio.h>

int main()
{
    printf("enter your marks:\n");
    int marks;
    scanf("%d",&marks);
    if(marks>95&&marks<=100) {
        printf("Grade: A+\n");
    }
    else if(marks>=90&&marks<=95) {
        printf("Grade: A\n");
    }
    else if(marks>=80&&marks<=89) {
        printf("Grade: B\n");
    }
    else if(marks>=70&&marks<=79) {
        printf("Grade: C\n");
    }
    else if(marks>=60&&marks<=69) {
        printf("Grade: D\n");
    }
    else if(marks>=45&&marks<=59) {
        printf("Grade: E");
    }
    else
    {
        printf("Grade: F");
    }
    return 0;
}