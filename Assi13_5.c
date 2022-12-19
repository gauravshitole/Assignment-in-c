#include<stdio.h>

int RangeDispaly(int iNo)
{
int iAns=0;
 int ieven=0;
 int iOdd=0;
 while(iNo>0)
 {
    int rem=iNo%10;
    if(rem%2==0)
 ieven=ieven+rem;
 else
 iOdd=rem+iOdd;
 iAns=ieven-iOdd;
 iNo=iNo/10;

    
   

 }
   printf(" diffrence digits %d\n",iAns);
    
 
}
int main()
{
    int isize=0;
    


    int i=0;

    printf("Enter size\n");
    scanf("%d",&isize);

    RangeDispaly(isize);
     

    return 0;
}