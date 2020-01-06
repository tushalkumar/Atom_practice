# include <stdio.h>

void print(int arr[])
{
  int *p = arr;
   int n = sizeof(p);
   printf("%d\n",n );
   int i;
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   for (i = 0; i < n; i++)
      printf("%d\n",*(p+i));
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   print(arr);
   return 0;
}
