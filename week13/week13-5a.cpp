#include <stdio.h>
int main(){
	int n,ans(0);
	scanf("%d",&n);
	
	while(n != 0){
		int digit = n%10;
		ans=ans*10+digit;
		n=n/10;
	
	}
	printf("%d\n",ans);


}