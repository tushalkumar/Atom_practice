#include <stdio.h>

int main() {
  char c1[] = {'h','e','l','l','o'};

  char temp = c1[0];
  int i;
  for( i=0;i<sizeof(c1)-1;i++)
  {
    c1[i]=c1[i+1];
  }
  c1[i]=temp;
  temp = c1[0];
  for( i=0;i<sizeof(c1)-1;i++)
  {
    c1[i]=c1[i+1];
  }
  c1[i]=temp;
  

  for(int i=0;i<sizeof(c1);i++)
  {
    printf("%c\n",c1[i] );
  }


  return 0;
}
