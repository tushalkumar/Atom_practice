#include<stdio.h>
#include<stdlib.h>

int square(char *title,int num)
{
  printf("%s",title);
  return num*num;
}

int main()
{
  int (*ptr1)(char *,int);

  int n = 5;
  // if(n==5)
  // {
  //   printf("Value of n is same \n"   );
  //   exit(0);
  // }
  ptr1 = &square;
  //printf("%p   %p   %p\n",ptr1, square, &square  );
  printf(" %d\n",(*ptr1)("Helloworld",n) );


}
