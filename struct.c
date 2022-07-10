#include<stdio.h>
struct Demo
{
   int iNo;
   float fValue;
   int iValue;
};

int main()
{
	struct Demo obj;
	obj.iNo=11;
	obj.fValue=10.11;
	obj.iValue=21;
	
	printf("%d\n",obj.iNo);
	printf("%f\n",obj.fValue);
	printf("%d\n",obj.iValue);
	printf("Size of obj is:%d",sizeof(obj));
	return 0;
}