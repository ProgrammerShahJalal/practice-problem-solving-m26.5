#include <stdio.h>

int buble_sorting(int *arr, int N);
int main()
{
    int N, arr[101];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    buble_sorting(arr, N);
    return 0;
}
int buble_sorting(int *arr, int N)
{
    int temp, i, j;
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (*(arr + j) < *(arr + i))
            {
               temp=*(arr + j);
               *(arr + j)=*(arr + i);
               *(arr + i)=temp;
            }
        }
    }
    for(i=0; i<N; i++){
        printf("%d ", *(arr + i));
    }
}