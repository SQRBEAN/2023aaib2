#include <stdio.h>
void myPrintf(int a[10]){
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    myPrintf(a);

    for(int k=0;k<10;k++){
        for(int j=k+1;j<10;j++){
            if (a[k]>a[j]){
                int temp=a[k];
                a[k]=a[j];
                a[j]=temp;

            }
        }
        myPrintf(a);
    }

}
