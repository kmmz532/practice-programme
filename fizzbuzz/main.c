#include <stdio.h>

#define MIN 1
#define MAX 100

int main(void) {
  for (int i = MIN; i <= MAX; ++i) {
    printf("%d ", i);
    if (i % 5 == 0) printf("Fizz");
    if (i % 3 == 0) printf("Buzz");
    printf("\n");
  }
  return 0;
}
