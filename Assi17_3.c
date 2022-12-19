#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int DisplayReverse(int Arr[], int iSize)    
{
   
   int max=Arr[0],min=Arr[0];;
   
    for( int i = 0; i<=iSize;i++)
    {
   if(max<Arr[i])
   {
    max=Arr[i];
   }
   if(min>Arr[i])
   {
    min=Arr[i];
    
   }   
    }
     printf(" smallest number is %d",max);
      printf(" max number is %d",min);
   
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