#include<stdio.h>
int main()
{
    int age;
    float height;
    char grade;
    printf("enter age:");
    scanf(" %d",&age);
    printf("enter height:");
    scanf(" %f",&height);
    printf("enter grade(A/B/C):");
    scanf(" %c",&grade);
    printf("\n---student details---\n");
    printf("age: %d\n",age);
    printf("height: %.1f\n",height);
    printf("grade:%c\n",grade);
    return 0;
}
