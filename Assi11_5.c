#include<stdio.h>

void RangeDispaly(int iStart,int iEnd)
{
  
      int iAns=0;
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }
    int iCnt=0;
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d",iCnt);
    }

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

    RangeDispaly(iValue1,iValue2);
    
    return 0;
}