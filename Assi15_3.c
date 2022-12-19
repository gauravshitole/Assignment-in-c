#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int DisplayReverse(int Arr[], int iSize)    
{
    int flag=0;
    int i = 0;
    int sum=0;
    int summ=0;
    int Ans=0;

    for(i = 0; i<=iSize;i++)
    {
   if(Arr[i]==11)
   {
flag=1;
break;
   }
    }
    if(flag==1)
  {
    printf("11 is present");
  }
  else
  {
  printf("11 is absent");
  }
}
int main()
{
    
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter number of elements : \n");     
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);  

    printf("Enter the elements : \n");      
    for(i = 0; i < iLength; i++)
    {
       scanf("%d",&ptr[i]); 
    }

     

   DisplayReverse(ptr,iLength);   
   
  
   

    free(ptr);      

    return 0;
}