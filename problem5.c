#include<stdio.h>

int sum_of_prefer_element(int N, int a[]);
int main()
{
    int N, a[101];
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    sum_of_prefer_element(N, a);
    return 0;
}
int sum_of_prefer_element(int N, int a[]){
    int sum=0;
    for(int i=0; i<N; i++){
        if(a[i]%10==0){
            sum+=a[i];
        }
    }
    printf("%d\n", sum);
}