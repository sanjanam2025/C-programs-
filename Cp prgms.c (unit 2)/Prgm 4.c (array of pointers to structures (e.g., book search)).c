#include<stdio.h>
#include<string.h>
struct book
{
int id;
char title[50];
char author[50];
};
int main()
{
struct book b1={101,"c programming","dennis ritche"};
struct book b2={102,"data structures","mark weiss"};
struct book b3={103,"operating systems","silberschatz"};
struct book*book[3]={&b1,&b2,&b3};
int searchid,i,found=0;
printf("enter book id to search:");
scanf("%d",&searchid);
for(i=0;i<3;i++)
{
if(book[i]->id==searchid)
{
printf("\nbook found:\n");
printf("id:%d\n",book[i]->id);
printf("title:%s\n",book[i]->title);
printf("author:%s\n",book[i]->author);
found=1;
break;
}
}
if(!found)
printf("\nBook Not Found!\n");
return 0;
}
