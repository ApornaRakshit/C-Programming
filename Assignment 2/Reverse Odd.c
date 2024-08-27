#include<stdio.h>
int main()
{
    int N;
    scanf("%d ",&N);
    
    int A[N];
    for(int i=0; i<N && N<=100000; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=N-1; i>=0; i--){
            if(i%2==1 && A[i]<=1000){
                printf("%d ",A[i]);
    }
    }

    return 0;
}
