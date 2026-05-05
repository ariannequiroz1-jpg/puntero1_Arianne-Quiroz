#include<stdio.h>
int main(){
    int num=15, a;
    int *x;
    a = *x;
    x = &num; //x se le asigna a la direccion de num
    printf("%p %d\n",x);
    char letra = 'a' , c;
    char *ptr;
    ptr = &letra;
    c= *ptr;
    printf("%p %c",ptr , c);
    
}