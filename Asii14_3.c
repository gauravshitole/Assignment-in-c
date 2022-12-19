#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int DisplayReverse(int Arr[], int iSize)    
{
   int min=Arr[0];
   int max=Arr[0];
   int Ans=0;
    for( int i = 0; i<=iSize;i++)
    {
   if(min>Arr[i])
   {
    min=Arr[i];
   }
   if(max<Arr[i])
   {
    max=Arr[i];
    Ans=max-min;
   }   
    }
     printf(" smallest number is %d",Ans);
   
}
int main()
{
    
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iNo=0;

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