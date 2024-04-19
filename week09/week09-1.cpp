#include <stdio.h>
int myAdd(int a,int b){
    return a+b;
}
void myPrint(int a){
    for (int i=1;i<=a;i++){
        printf("*");
        }printf("\n");
}
int main()///main()¨ç¦¡
{
    int ans=myAdd(3,4);
    printf("Hello World: %d\n",ans);
    myPrint(ans);
    myPrint(7);
    myPrint(6);
    myPrint(5);
}
