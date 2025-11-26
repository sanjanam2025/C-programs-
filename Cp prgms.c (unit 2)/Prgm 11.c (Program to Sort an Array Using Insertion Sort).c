#include<stdio.h>
#include<stdlib.h>
void insertionsort(int* arr1,int n)
{
for(int i=0;i<n-1;i++)
{
if(arr1[i]>arr1[i+1])
for(int j=i;j>=0;j--) 		{
if(arr1[j]>arr1[j+1]) 	{
int temp=arr1[j];
arr1[j]=arr1[j+1];
arr1[j+1]=temp;
}
}
printf("\n **************\n Interation %d\n **************\n", i+1);
for (int i=0;i<n;i++)
printf("%d\t",arr1[i]);
	}
}
int main()
{
int arr[]={14,33,27,10,35,19,44,42};
int size=sizeof(arr)/sizeof(arr[0]);
printf("Sizeof array=%d",size);
printf("\n Before Sorting\n");
for (int i=0;i<size;i++)
printf("%d\t",arr[i]);
insertionsort(arr,size);
printf("\n");
printf("After Sorting \n");
for (int i=0;i<size;i++)
printf("%d\t",arr[i]);
return 0;
}
