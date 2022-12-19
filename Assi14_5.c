#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int DisplayReverse(int Arr[], int iSize)    
{
    int flag=0;
    int i = 0;
    int sum=0;
    int iNo=11;
    int Ans=0;

    for(i = 0; i<=iSize;i++)
    {
   if(Arr[i]*iNo==0);
  {
    sum=Arr[i];
  }
    }
    return sum;
    
}
int main()
{
    
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iRet=0;

    printf("Enter number of elements : \n");     
    scanf("%d",&iLength);
  
    ptr = (int *)malloc(sizeof(int) * iLength);  

    printf("Enter the elements : \n");      
    for(i = 0; i < iLength; i++)
    {
       scanf("%d",&ptr[i]); 
    }

     

  iRet= DisplayReverse(ptr,iLength);   
   printf(" ans %d",iRet);
  
   

    free(ptr);      

    return 0;
}