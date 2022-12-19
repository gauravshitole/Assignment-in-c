#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
int Display(int iNo)
{

int digit=0;
if(iNo<0)
{
    iNo=-iNo;
}
while(iNo>0)
{
    digit=iNo%10;
    if(digit==0)
    {
    return TRUE;
    
    }
     iNo=iNo/10;
   
 
    
    
}

}

int main()
{
    BOOL bRet=0;
int iValue=0;

printf("Enter the number\n");
scanf("%d",&iValue);

bRet=Display(iValue);
if(bRet==TRUE)
{
    printf("It contain Zero");
}
else
{
    printf("There is no Zero");
}

    return 0;
}