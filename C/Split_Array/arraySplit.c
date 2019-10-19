#include <stdio.h>
void main ()
{
 int number[30];
 int i,n,a,j;

 printf ("Enter the Size of Array: ");
 scanf ("%d",&n);

 printf ("enter the elements:\n");
 for (i=0; i<n; ++i)
  scanf ("%d", &number[i]);

 printf ("Enter the position of the element to split the array: ");
 scanf ("%d",&a);

 for (i=0; i<a; ++i)
 {
  number[n] = number[0];

  for (j=0; j<n; ++j)
  {
   number[j] = number[j+1];
  }
 }

 printf("The resultant array is\n");
 for (i=0; i<n; ++i)
 {
  printf ("%d\n",number[i]);
 }
}
