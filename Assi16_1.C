#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int DisplayReverse(int Arr[], int iSize,int iNo)    
{
   
int flag=0;
    for( int i = 0; i<=iSize;i++)
    {
   if(Arr[i]==iNo)
   {
 flag=1;
 break;
}
  
    }
    if(flag==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
int main()
{
    
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iNo=0;

    printf("Enter number of elements : \n");     
    scanf("%d",&iLength);
    printf("Frequency number:\n");
    scanf("%d",&iNo);
    ptr = (int *)malloc(sizeof(int) * iLength);  

    printf("Enter the elements : \n");      
    for(i = 0; i < iLength; i++)
    {
       scanf("%d",&ptr[i]); 
    }

     

   DisplayReverse(ptr,iLength,iNo);   
   
  
   

    free(ptr);      

    return 0;
}