#include<stdio.h>
int main()
{
char name[20];
int age;
float marks;
printf("enter name,age and marks:");
scanf("%s %d %f",&name,&age,&marks);
printf("name:%s\nage:%d\nmarks:%.2f",name,age,marks);
getchar();
return 0;
}
