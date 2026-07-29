#include<stdio.h>
int main() {
  int currentAge, electionYear;
  scanf("%d %d", &currentAge, &electionYear);
  //Age in election year = Current age + (Election year - 2026)
  currentAge + (electionYear - 2026) >= 18 ? printf("Eligible") : printf("Not Eligible");
  return 0;
}