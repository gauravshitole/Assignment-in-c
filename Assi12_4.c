#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
int Display(int iNo)
{
int count=0;
int digit=0;
if(iNo<0)
{
    iNo=-iNo;
}
while(iNo>0)
{
    digit=iNo%10;
    if(digit==4)
    {
    count++;
    
    }
     iNo=iNo/10;
   
 
    
    
}
printf("%d\n",count);

}

int main()
{
    
int iValue=0;

printf("Enter the number\n");
scanf("%d",&iValue);

Display(iValue);
 
    return 0;
}