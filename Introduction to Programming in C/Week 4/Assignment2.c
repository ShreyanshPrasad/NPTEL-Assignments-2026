#include <stdio.h> 
#include <stdlib.h> 
int main() { 
  int n; 
  scanf("%d", &n); 
  int arr[100]; 
  int *num = (int*) malloc(n * sizeof(int)); 
  int k = 0; 
  // Read the array elements 
  for (int i = 0; i < n; i++) { // 3 5 3 2 5 8 2 1 
    scanf("%d", &arr[i]); 
    
  } /*Complete the code here*/
  for(int i = 0; i < n; i++){ 
    int duplicate = 0;
    
    for(int j = 0; j < k; j++){ 
      if(arr[i] == num[j]) { 
        duplicate = 1;
        break; 
      } 
    }
    if(! duplicate) { 
      num[k++] = arr[i]; 
    } 
  }
  
  for(int i = 0; i < k; i++) 
    printf("%d ", num[i]); 
    
  return 0; 
  
}