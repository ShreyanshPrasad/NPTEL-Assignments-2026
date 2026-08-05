#include <stdio.h>

int parking_fee(int hours)
{
    if(hours == 0)
      return 0;
    else if(hours > 0)
      return (hours - 2) * 30 + 2 * 20;
}

int main()
{
    int hours;
    scanf("%d", &hours);

    printf("%d", parking_fee(hours));

    return 0;
}