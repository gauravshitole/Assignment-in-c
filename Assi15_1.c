 #include<stdio.h>
#include<stdlib.h>

int DisplayReverse(int Arr[], int iSize)    
{
    int i = 0;
    int sum=0;
    int sum1=0;
    int Ans=0;

    for(i = 0; i<=iSize;i++)
    {
   if(Arr[i]%2==0) 
   {
   sum++;
   }
    }
     printf(" Ans is: %d  ",sum);  
}
int main()
{
    int iRet=0;
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