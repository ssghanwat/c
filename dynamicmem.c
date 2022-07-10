#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Arr[5];      //static memory allocation
	int size=0;
	int *ptr=NULL;
	
	printf("Enter number of elements that you want to allocate: ");
	scanf("%d",&size);
	
	ptr=(int *)malloc(size * sizeof(int));				//Step 1: Allocate the memory
	printf("%d\n",ptr);
	if(ptr==NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("Memory successfully allocated\n");
	}

	// Step 2:Use the memory
	
	free(ptr);									//Step 3: Free the memory
	return 0;
}