// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
struct Results {
  int * A;
  int N; // Length of the array
};

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    if (N>0){
        int copy[N];
        memcpy(copy,A,N*sizeof(int));
        K = K%N; //If K > N
        if (K!=0){
            int index = 0;
            int i;
            for (i=N-K;i<N;i++){
                A[index]=copy[i];
                index++;
            }
            for (i=0;i<N-K;i++){
                A[index]=copy[i];
                index++;
            } 
        }        
            
    }

    
    //Finish
    result.A = A;
    result.N = N;
    return result;
};