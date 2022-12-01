#include<stdio.h>
#include<math.h>


double circle_area(double R);
int main(){
    double R;
    scanf("%lf", &R);

    circle_area(R);
    return 0;
}
double circle_area(double R){
    double area=M_PI*pow(R, 2);
    printf("%lf\n", area);
}