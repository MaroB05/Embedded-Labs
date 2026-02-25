#include <stdio.h>
// Problem: Implement a swap function to swap 2 variables using pointers
void swap(int* a, int* b){
  int temp = *b;
  *b = *a;
  *a = temp;
}

int main(int argc, char* argv[]){
  int a = 5;
  int b = 9;
  puts("Before:\n");
  printf("\ta: %d @ %p\n", a, &a);
  printf("\tb: %d @ %p\n", b, &b);
  swap(&a, &b);
  puts("After:\n");
  printf("\ta: %d @ %p\n", a, &a);
  printf("\tb: %d @ %p\n", b, &b);

  return 0;
}
