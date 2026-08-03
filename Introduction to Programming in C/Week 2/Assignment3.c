#include<stdio.h>
#include<stdlib.h>
int main() {
  int n, isUpper = 1, **matrix;
  scanf("%d", &n);
  matrix = (int**) malloc(n * sizeof(int));
  for(int i = 0; i < n; i++) {
    matrix[i] = (int*) malloc(n * sizeof(int));
    for(int j = 0; j < n; j++)
        scanf("%d", &matrix[i][j]);
  }

  for(int i = 1; i < n; i++){
    for(int j = 0; j < i; j++){
      if(matrix[i][j] != 0){
        isUpper = 0;
        break;
      }
    }
    if(!isUpper)
    break;
  }
  printf("%d", isUpper);
  return 0;
}