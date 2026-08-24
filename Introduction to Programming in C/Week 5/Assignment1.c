#include <stdio.h>
int count = 0;
int collatz_repeat(int n) {
  
  if(n == 1)
    return count;
    
  if(n % 2 == 0){ //Even
    n = n / 2;
    count++;
    collatz_repeat(n);
  }else { //Odd
    n = n * 3 + 1;
    count++;
    collatz_repeat(n);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", collatz_repeat(n));
  return 0;
}