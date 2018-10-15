#include <stdio.h>
#include <string.h>
//#include "bubble_sort.h"      //bubble_sort(Arrary,length)
//#include "selection_sort.h"   //selection_sort(Arrary,length)
//#include "insertion_sort.h"   //insertion_sort(Arrary,length)
//#include "shell_sort.h"       //shell_sort(Arrary,length)

//#include "merge_sort_recursive.h"  //merge_sort(Arrary,length)
//#include "merge_sort_iterative.h"  //merge_sort(Arrary,length)

//#include "quick_sort_iterative.h"  //quick_sort(Arrary,length)
//#include "quick_sort_recursion.h"   //quick_sort(Arrary,length)
#include "solution.h"

/*
I haven't written TEST CASE for this quesiton!
*/

int main(void) {
  printf("Hello World\n");
// NOTE K>len(A)
  
  int K,length;

    int A[] = {1, 2, 3, 5, 6}; // 4 Missed
    length = sizeof(A) / sizeof(A[0]);
    //merge_sort(A,length);
    //quick_sort(A,length);
    printf("%d ",solution(A,length)); 
    printf("\n");

   

    int B[] = {1, 3, 4};
    length = sizeof(B) / sizeof(B[0]);
    printf("%d ",solution(B,length)); 
    printf("\n");

    int C[] = {1, 5, 3, 2};
    length = sizeof(C) / sizeof(C[0]);
    printf("%d ",solution(C,length)); 
    printf("\n");
     
  return 0;
}
