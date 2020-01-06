#include<stdio.h>

int main(int argc, char const *argv[]) {
  int number = 1001,copy = 0,local;
  local=number;

  while (local!=0) {
    copy = copy *10;
    copy = copy + local %10;
    local = local/10;
  }
  if(number==copy)
    printf("I am suceed" );
  else
  {}
}
