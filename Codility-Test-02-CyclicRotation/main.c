#include <stdio.h>

#include <string.h>
#include "solution.h"
#include <string.h>


int main(void) {
  printf("Hello World\n");
// NOTE K>len(A)
  
  int K,length;

    int A[] = {3, 8, 9, 7, 6};
    K = 3;
    length = sizeof(A) / sizeof(A[0]);
    struct Results result1  = solution(A,length,K);// NOTE! struct Results
    for (int i=0;i<result1.N;i++)
      printf("%d  ",result1.A[i]);
     printf("\n");

    int B[] = {0, 0, 0};
    K = 1;
    length = sizeof(B) / sizeof(B[0]);
    struct Results result2  = solution(B,length,K);// NOTE! struct Results
    for (int i=0;i<result2.N;i++)
      printf("%d  ",result2.A[i]);   
     printf("\n");
     

    int C[] = {1, 2, 3, 4};
    K = 4 ;   
    length = sizeof(B) / sizeof(B[0]);
    struct Results result3  = solution(C,length,K);// NOTE! struct Results
    for (int i=0;i<result3.N;i++)
      printf("%d  ",result3.A[i]);   
     printf("\n");
     
  return 0;
}