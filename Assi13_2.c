#include<stdio.h>

int RangeDispaly(int iNo)
{
 int icount=0;
 int iOdd=0;
 while(iNo>0)
 {
    int rem=iNo%10;
    if(rem%2==0)
 icount++;
 else
 iOdd++;
 iNo=iNo/10;

    
   

 }
   printf("%d\n",iOdd);
 
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