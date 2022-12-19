#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
int DisplayReverse(int Arr[], int iSize,int iNo,int iNo1)    
{
   int index=-1;
  int sum=0;
    for( int i = iSize; i>=-1;i--)
    {
   if((Arr[i]>iNo)&&(Arr[i]<iNo1))
   {
    sum=Arr[i];
    printf("%d   ",sum);
   }
   
    }
    
}
int main()
{
    
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iNo=0;
    int iNo1=0;

    printf("Enter number of elements : \n");     
    scanf("%d",&iLength);
    printf("start number:\n");
    scanf("%d",&iNo);

    printf("End number:\n");
    scanf("%d",&iNo1);

    ptr = (int *)malloc(sizeof(int) * iLength);  

    printf("Enter the elements : \n");      
    for(i = 0; i < iLength; i++)
    {
       scanf("%d",&ptr[i]); 
    }

     

   DisplayReverse(ptr,iLength,iNo,iNo1);   
   
  
   

    free(ptr);      

    return 0;
}