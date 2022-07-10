#include<stdio.h>
int main()
{
	int arr[5];
	int brr[5];
	int crr[5];
	
	for(int i=0;i<5;i++)
	{
		arr[i]=i;
	}
	for(int i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		brr[i]=i+6;
	}
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	for(int i=0;i<5;i++)
	{
		printf("\n%d",crr[i]);
	}
	printf("\n%d",arr);
}