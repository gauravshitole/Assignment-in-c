#include<stdio.h>

int RangeDispaly(int iStart,int iEnd)
{
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }
    int iCnt=0;
    int iAns=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
iAns=iCnt+iAns;
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
    printf("%d",iRet);

    return 0;
}