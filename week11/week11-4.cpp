#include <stdio.h>
int main()
{
	int m,n,a[30][30],i,j;
	scanf("%d %d",&m,&n);
	printf("\n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			//printf("%d ",a[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%2d ",a[m-j-1][i]);
		}
		printf("\n");
	}

}