//The solution will be written here.
/*

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.

Write a function:

int solution(int N);

that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

*/
#include <string.h>
char out_str[2];
void get_bin_bits(int n)
{
	if(n) 
		get_bin_bits(n/2); 
    //Finish recursion
    char bit[2] = {'0'+n%2,'\0'};
    strcat(out_str,bit);
    //printf("%d",n%2);  
}
int max_gap = 0;
void count_gap(char* str){
    int index = 0;
    int counter=0;    
    int status =0; 
    while (str[index]!='\0'){
        //printf("%c",str[index]);
        if ((status==0)&&(str[index]!='1')){
            index++; 
            continue;
        } //A->A
        if ((status==0)&&(str[index]=='1')){
            status=1;
            index++; 
            continue;
        } //A->B        
        if ((status==1)&&(str[index]=='0')){
            counter++;
            index++; 
            continue;            
        } //B->B
        if ((status==1)&&(str[index]=='1')){
            if (counter>max_gap)
                max_gap=counter;
            status = 1;
            counter=0;
            index++; 
            continue;            
        } //B->C->A        
            
    }
    return ;
}
int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    get_bin_bits(N);
    //printf("%s",out_str);
    count_gap(out_str);
    return max_gap;
}