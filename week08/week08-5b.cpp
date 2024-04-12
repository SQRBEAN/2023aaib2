#include <stdio.h>
int main()
{
	int N;
	float total(0);
	scanf("%d",&N);
	for(int a=0;a<N;a++){
		int k;
		scanf("%d",&k);
		total=total+k;
	}
	printf("%.2f",float(total/N));
	
}