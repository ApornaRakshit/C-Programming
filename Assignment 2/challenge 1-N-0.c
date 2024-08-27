#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if (N > 0 && N <= 100000) {
        for (int i = 1; i <= N; i++) {
            printf("%d ", i);
       }
    }

    else if(N < 0 && N >= -100000) {
        for (int i = N; i <= 0; i++) {
            printf("%d ", i);
       }
    }
    else{
        printf("0");
    }

    return 0;
}

