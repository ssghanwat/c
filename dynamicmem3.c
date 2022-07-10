#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr=NULL;
	ptr=(int *)malloc(5*sizeof(int));
	printf("%d\n",ptr);
	ptr=(int *)realloc(ptr,7*sizeof(int));
	printf("%d\n",ptr);
	ptr=(int *)realloc(ptr,3*sizeof(int));
	printf("%d\n",ptr);
	free(ptr);								
	return 0;
}