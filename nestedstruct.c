#include<stdio.h>

struct Demo
{
	int i;
	int j;
};

struct Hello
{
	float f;
	int no;
	struct Demo dobj;
};

int main()
{
	struct Hello hobj;
	hobj.f=10.11;
	hobj.no=11;
	
	hobj.dobj.i=21;
	hobj.dobj.j=51;
	
	printf("%d\n",hobj.dobj.i);
	printf("Size of hobj:%d\n",sizeof(hobj));
	printf("Size of hobj:%d\n",sizeof(hobj.dobj));

	return 0;
}