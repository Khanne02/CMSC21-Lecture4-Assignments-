#include<stdio.h>
  
  int main() {
    long int p;
    int n;
    
    printf("Table of Powers of Two\n\n");
    printf("\n n    2 to the n");
    printf("\n===  ============");
    
    p = 1;
    for (n = 0; n < 11; ++n) {
      if (n == 0)
        p = 1;
      else
        p = p * 2;
      printf("\n%2d   %8ld", n, p);
    }
    return 0;
  }



