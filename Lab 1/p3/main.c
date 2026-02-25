#include <stdio.h>

#define set_bit(num, index) num | (1 << index)
#define clear_bit(num, index) num & ~(1 << index)
#define toggle_bit(num, index) num ^ (1 << index)
#define is_set(num, index) (num & (1 << index) > 0)

/* Problem : Given (unsigned char x = 0b10101010; ) 
 * Set bit 3
 * Clear bit 6
 * Toggle bit 0
 * Check if bit 7 is set 
 * Do it using bitwise operations only.*/

int main(int argc, char* argv[]){
  char x = 0b10101010;
  x = set_bit(x, 3);
  printf("x is %d\n", x);
  x = clear_bit(x, 6);
  printf("x is %d\n", x);
  x = toggle_bit(x, 0);
  printf("finally, x is %d\n", x);
  printf("is bit 7 set?: %d\n", is_set(x, 7));

  return 0;
}
