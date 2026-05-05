#include<stdio.h>
int main(){
    int num=15, a;
    int *x;
    a = *x; // a se le asigna el valor de x
    x = &num; //x se le asigna a la direccion de num
    printf("%p %d\n",x); // traabajatr con caracteres
    char letra = 'a' , c;
    char *ptr;
    ptr = &letra;
    c= *ptr;
    printf("%p %c\n",ptr , c); // trabajo con decimales 
    float decimal = 3.14, dec;
    float *ptrF;
    ptrF = &decimal;
    dec = *ptrF;
    printf("%p %.2f\n",ptrF , dec);
    return 0;
    
}