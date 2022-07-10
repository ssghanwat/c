#include<stdio.h>

int Addition(int no1,int no2)
{
   int ans=0;
   ans=no1+no2;
   return ans;
}
int main()
{
   int a=10,b=20;
   int ret=0;
   
   int (*fptr)(int,int);
   fptr=Addition;                              //store address of Addition fun in pointer
   printf("Address of Addition fun is:%d\n",Addition);     //we can get address of fun by funname like array &operator is not compolsory
   ret=fptr(a,b);                              //fun call using by pointer
   printf("Addition is %d\n",ret);
   
   return 0;
}