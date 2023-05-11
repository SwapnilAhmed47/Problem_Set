// Print Digits using Recursion
#include<stdio.h>
void fun(int n){
    if(n==0) return;
    int x=n%10;
    fun(n/10);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d ",&n);
        fun(n);
        if(n==0){
            printf("0");
        }
        printf("\n");
    }
    
return 0;
}

// gcc p3.c -o p3
// ./p3