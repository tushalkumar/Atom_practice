#include<stdio.h>


int main()
{
  int *ip;
  int a[5];
  ip = a;
  int i,j,n;
  n = sizeof(a)/sizeof(a[0]);

  int count=0;
  //printf("%d\n",n );
  printf("%s %d\n","Enter the number",n );
  for(i = 0;i < n;i++)
  {
    scanf("%d",&a[i]);
    //printf("%d %d\n",i,*ip);
    *(ip++);
  }
  printf("%s\n","\n\n" );
/* bubble sort Algorithm
  for(i = 0; i < n; i++)
  {
    for(j = i+1;j<n;j++)
    if(a[i]>a[j])
    {
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      count++;
    }
  }
  */

  /*insertion sort Algorithm*/

for(i=1;i<n;i++)
{
  j = i -1;
  int temp  = a[i];
  while(temp<a[j] && j>=0)
  {
    a[j+1] = a[j];
    j--;
  }
  a[j+1] = temp;
  for(int k=0;k<n;k++)
  {
    printf("%d\n",a[k] );
  }
  printf("%s %d\n","************",i );

}

  printf("%s %d\n", "print sorted array\n",count);
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
