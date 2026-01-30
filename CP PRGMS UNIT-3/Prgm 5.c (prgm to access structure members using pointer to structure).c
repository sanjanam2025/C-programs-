#include<stdio.h>
struct student
{
int id;
char name[20];
};
int main()
{
struct student s={101,"anu"};
struct student*ptr=&s;
printf("id: %d\n",ptr->id);
printf("name: %s\n",ptr->name);
return 0;
}
