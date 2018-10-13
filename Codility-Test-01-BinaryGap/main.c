#include <stdio.h>
#include "solution.h"
  //int solution(int N)
int main(void) {
  printf("Let's start!\n");
  int testInput;

  
  testInput = 1041;
  printf("Result=%d\n",solution(testInput));
  testInput = 2147483647;
  printf("Result=%d\n",solution(testInput));
  testInput = 1073741825;
  printf("Result=%d\n",solution(testInput));
  return 0;
}