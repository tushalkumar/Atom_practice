#include <stdio.h>

int main() {
   int LA[] = {1,3,5,7,8};
   int item = 10, k = 3, n = 5;
   int i = 0, j = n;

   // printf("The original array elements are :\n");
   //
   // for(i = 0; i<n; i++) {
   //    printf("LA[%d] = %d \n", i, LA[i]);
   // }



   while( j >= k) { // 5 >= 3 // 4>=3  // 3>==3

      LA[j+1] = LA[j]; // LA[6] = null //LA[5] = 8 //LA[4] = 7
      printf("\n%d\n%d",LA[j+1],LA[j]);
      j = j - 1;

   }
   printf("The array elements before insertion :\n");
   n = n + 1;

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

   LA[k] = item;

   printf("The array elements after insertion :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
   getchar();
}
