#include <stdio.h>
int isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int bound = 10000,ans=0;
    for (int i=2;i<bound;i++){
        if(isprime(i)){ printf("%d ",i);
            ans++;
        }
    }
    printf("´Ó¾ð¦³:%d­Ó\n",ans);
}
