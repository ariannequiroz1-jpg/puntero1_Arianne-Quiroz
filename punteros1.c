#include<stdio.h>
int main(){
    int num=15, a;
    int *x;
    a = *x;
    x = &num; //x se le asigna a la direccion de num
    printf("Direccion de x:%p",x);
    printf("%p",x);
    printf("%p",x);

}