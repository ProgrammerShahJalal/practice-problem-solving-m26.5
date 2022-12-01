#include<stdio.h>

int main(){
    double x, y;
    double* p, *q;
    
    p=&x;
    q=&y;
    scanf("%lf%lf", p, q);
    printf("%.3lf\n", (*p+*q)/2);

    return 0;
}