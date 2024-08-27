#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d", &N);
    
    for(i=21; i<=N && i<=10000; i++){
        if(i%3 == 0 && i%7 == 0){
        printf("%d\n",i);
        }
    }
    
    return 0;
}
