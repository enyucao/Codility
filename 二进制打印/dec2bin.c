#include <stdio.h>
#include <string.h>
char out_str[2];

void print_bin_bits(int n)
{
	if(n) 
		print_bin_bits(n/2); 

    char bit[2] = {'0'+n%2,'\0'};
    strcat(out_str,bit);
    printf("%d",n%2);  

	
}
void dec_to_bin(int n) 
{   strcat(out_str,"0b");
    printf("0b");
    print_bin_bits(n);
    printf("\n");
}   
int max_gap = 0;

void count_gap(char* str){
    int index = 0;
    int counter=0;    
    int status =0; 
    while (str[index]!='\0'){
        printf("%c",str[index]);
        char thisChar = str[index];
        index++;        
        if ((status==0)&&(thisChar!='1')){
            continue;
        } //A->A
        if ((status==0)&&(thisChar=='1')){
            printf("A->B\n");    
            status=1;
            continue;
        } //A->B        
        if ((status==1)&&(thisChar=='0')){
            counter++;
            printf("B->B, counter=%d\n",counter);
            continue;
        } //B->B
        if ((status==1)&&(thisChar=='1')){
            if (counter>max_gap){
                max_gap=counter;
                printf("Update Gap Value=%d\n",max_gap);
            }    
            else
                printf("Gap Value(NOT UPDATED)=%d\n",max_gap);
            status = 1; 
            counter =0; 
            printf("B->C->B\n");  
            continue;
        } //B->C->A        
    
    }
    return ;
}

int main()
{
    
    int a = 1;
    scanf("%d",&a);
    printf("八进制 --> %o\n", a);
    printf("十六进制 --> %X\n", a);
    printf("十进制 --> %d\n", a);
     dec_to_bin(a);
    printf("二进制 --> %s\n",out_str);
    count_gap(out_str);
    printf("\n The gap is %d",max_gap);
    return 0;

}
