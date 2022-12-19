#include<stdio.h>

int RangeDispaly(int iStart,int iEnd)
{
  
      int iAns=0;
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
 if(iCnt%2==0)
 {
    iAns=iAns+iCnt;
 }

 
    } 
     return iAns;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter starting point");
    scanf("%d",&iValue1);
    printf("Enter ending  point");
    scanf("%d",&iValue2);

    iRet=RangeDispaly(iValue1,iValue2);
    printf("%d  ",iRet);

    return 0;
}