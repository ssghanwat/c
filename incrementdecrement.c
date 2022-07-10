#include<stdio.h>
int main()
{
   int no1=10;
   int no2=10;
   int ans1=0;
   int ans2=0;
   ans1=no1++;     //post increment
   printf("\nValue of ans:%d",ans1);
   printf("\nvalue of no1:%d",no1);
   
   ans2=++no2;     //pre increment
   printf("\nvalue of ans2:%d",ans2);
   printf("\nvalue of no2:%d",no2);
   
   int no3=20;
   int no4=20;
   int ans3=0;
   int ans4=0;
   ans3=no3--;     //post decrement
   printf("\nValue of ans:%d",ans3);
   printf("\nvalue of no1:%d",no3);
   
   ans4=--no4;    //pre decrement
   printf("\nvalue of ans2:%d",ans4);
   printf("\nvalue of no2:%d",no4);
   
   return 0;
   
}