#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N && N<=100000; i++)
    {
        scanf("%d",&A[i]);
    }
    
    int X,V;
    {
        scanf("%d %d", &X, &V);
        if(X<N && V<=100)
        {
            A[X]= V;
        }

        for(int i = N-1; i>=0; i--){
            if(A[i]>=1 && A[i]<=100)
            {
                printf("%d ", A[i]);
            }
        }
    }

    return 0;
}
