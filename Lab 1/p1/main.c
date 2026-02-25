#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  if (argc < 2){
    puts("Not enough arguments\ncount number\n");
    return -1;
  }

  int x = atoi(argv[1]);
  int y = x;
  int count = 0;
  while (x){
    count += x & 1;
    x = x >> 1;
  }
  printf("%d has %d ones\n", y, count);
  return 0;
}
