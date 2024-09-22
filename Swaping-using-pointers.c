#include<stdio.h>
int swap(int *x,int *y);
void main()
{ int a=10;
int b=20;
swap(&a,&b);
printf("values of a and b after swaping \n a=%d b=%d",a,b);
} 
int swap(int *x,int *y){
    int temp;
    temp= *x;
    *x = *y;
    *y = temp;
    return 0;
}
