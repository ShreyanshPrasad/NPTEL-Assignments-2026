#include <stdio.h>

//Complete this function.
int *find(int arr[], int n, int key)
{
    // Write your code here
    for(int i = 0; i < n; i++){
      if(arr[i] == key) {
        return &arr[i];
      }
    }
    return NULL;
}

int main()
{
    int n, key;

    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int *ptr = find(arr, n, key);

    if (ptr == NULL)
    {
        printf("Key not found.");
    }
    else
    {
        printf("Value found: %d\n", *ptr);
        printf("Index: %ld\n", ptr - arr);

        printf("Elements from the first occurrence:\n");

        while (ptr < arr + n)
        {
            printf("%d ", *ptr);
            ptr++;
        }

    }

    return 0;
}