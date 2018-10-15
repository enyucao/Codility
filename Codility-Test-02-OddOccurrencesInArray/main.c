#include <stdio.h>
#include <string.h>
//#include "bubble_sort.h"      //bubble_sort(Arrary,length)
//#include "selection_sort.h"   //selection_sort(Arrary,length)
//#include "insertion_sort.h"   //insertion_sort(Arrary,length)
//#include "shell_sort.h"       //shell_sort(Arrary,length)

#include "merge_sort_recursive.h"  //merge_sort(Arrary,length)
//#include "merge_sort_iterative.h"  //merge_sort(Arrary,length)

//#include "quick_sort_iterative.h"  //quick_sort(Arrary,length)
#include "quick_sort_recursion.h"   //quick_sort(Arrary,length)


/*
I haven't written TEST CASE for this quesiton!
*/

int main(void) {
  printf("Hello World\n");
// NOTE K>len(A)
  
  int K,length;

    int A[] = {3, 8, 9, 7, 6};
    length = sizeof(A) / sizeof(A[0]);
    merge_sort(A,length);
    //quick_sort(A,length);
    for (int i=0; i<length;i++)
      printf("%d ",A[i]);
    printf("\n");

   

    int B[] = {0, 0, 0};
    length = sizeof(B) / sizeof(B[0]);
    quick_sort(B,length);    
    for (int i=0; i<length;i++)
      printf("%d ",B[i]);
    printf("\n");

    int C[] = {1, 5, 3, 2};
    length = sizeof(C) / sizeof(C[0]);
    quick_sort(C,length);    
    for (int i=0; i<length;i++)
      printf("%d ",C[i]);
    printf("\n");
     
  return 0;
}
