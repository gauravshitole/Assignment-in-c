#include<stdio.h>

int RangeDispaly(int iNo)
{

    int icount=0;
 int iOdd=0;
 while(iNo>0)
 {
    int digit=iNo%10;
    if((digit==3 )||(digit==7))
    icount++;
      iNo=iNo/10;
    
 

    
   


 }
   printf("%d\n",icount);
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