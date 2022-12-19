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
   if(Arr[i]%2!=0)
   {
     
     sum=sum+Arr[i];
   }
   else
   {
    sum1=sum1+Arr[i];
    Ans=sum1-sum;
   }
      

    }

return Ans;
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

     

  iRet=  DisplayReverse(ptr,iLength);   
  printf("Addition is %d",iRet);



    free(ptr);      

    return 0;
}