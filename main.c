#include<stdio.h>

int sub(int a,int b){
    return a-b;
}

int add(int a,int b){
    return a+b;
}

int main(){
    printf("Do not hello World");

    int a=10;
    int b=20;

    printf("%d",sub(a,b));

    printf("%d",add(a,b));

    return 0;
}