#include<stdio.h>

int  print_by_pointer(int N, int* a);
int main(){
    int N, a[101];
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    print_by_pointer(N, a);
    return 0;
}
int  print_by_pointer(int N, int* a){
    for(int i=0 ; i<N; i++){
        printf("%d ", *(a+i));
    }
}