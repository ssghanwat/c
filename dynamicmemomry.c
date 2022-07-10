#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=0;
	printf("Enter the size:");
	scanf("%d",&a);
	int * ptr=NULL;
	ptr=(int *)malloc(a*sizeof(int));
	ptr=(int *)realloc(ptr,2*sizeof(int));

	
	free(ptr);
	return 0;
}