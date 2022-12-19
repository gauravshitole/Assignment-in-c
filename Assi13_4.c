#include<stdio.h>

int RangeDispaly(int iNo)
{

    int icount=1;
 int iOdd=0;
 while(iNo>0)
 {
    int digit=iNo%10;
    icount=icount*digit;
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
}