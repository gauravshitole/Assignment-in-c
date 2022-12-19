#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int DisplayReverse(int Arr[], int iSize)   
{
    int mod=10000000007;
    int i = 0;
    int sum=0;
    int product=0;
    int Ans=1;

    for(i = 0; i<=iSize;i++)
   {
 
   Ans=Ans * Arr[i]%mod;
   
    return Ans;
    }
  
}
int main()
{
    
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iNo=0;
    int iRet=0;

    printf("Enter number of elements : \n");     
    scanf("%d",&iLength);
     
    ptr = (int *)malloc(sizeof(int) * iLength);  

    printf("Enter the elements : \n");      
    for(i = 0; i < iLength; i++)
    {
       scanf("%d",&ptr[i]); 
    }

     

   iRet=DisplayReverse(ptr,iLength);


   printf("product number is%d",iRet);   
   
  
   

    free(ptr);      

    return 0;
}