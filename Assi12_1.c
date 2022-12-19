#include<stdio.h>
void Display(int iNo)
{

int digit=0;
if(iNo<0)
{
    iNo=-iNo;
}
while(iNo>0)
{
    digit=iNo%10;
    printf("%d\n",digit);
    iNo=iNo/10;
}

}

int main()
{
int iValue=0;

printf("Enter the number\n");
scanf("%d",&iValue);

Display(iValue);

    return 0;
}