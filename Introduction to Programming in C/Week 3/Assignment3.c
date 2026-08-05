#include<stdio.h>
int main() {
  char ch;
  int no;
  
  scanf("%c", &ch);
  scanf("%d", &no);

  ch = ch + no;
  
  if(ch > 'z')
    ch = ch - 26;
    
  printf("%c", ch);
  
  return 0;
}