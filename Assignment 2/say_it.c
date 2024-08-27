#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N && N <= 100000; i++){
        printf("%d. I Want More Assignments\n",i);
    }

    return 0;
}