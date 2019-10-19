#include <stdio.h>
int main()
{
   int n,i,j,count=0;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the elements: \n");
   for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
     count=1;
     for(j=i+1;j<=n-1;j++)
    {
        if(arr[i]==arr[j] && arr[i]!='\0')
       {
           count++;
           arr[j]='\0';
       }
    }
    if(arr[i]!='\0' && count!=1)
    printf("%d occurs %d times\n",arr[i],count);
  }
return 0;
}
