#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
    int sum = (*p)+(*q);
    printf("Sum is : %d",sum);
}                                                                                                                                                                                    