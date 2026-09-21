#include <stdio.h>
int main(){
	int A[10][10],n,i,j,a=0;

	printf("Enter the order the square matrix");
	scanf("%d",&n);

	printf("Enter the matrix");
	for(j=0;j<n;j++)
		for(i=0;i<n;i++)
			scanf("%d",&A[i][j]);

	for(j=0;j<n;j++)
		for(i=0;i<n;i++)
			if (A[i][j] != A[i][j])
				a = 1;

	if (a==0)
		printf("The given matrix is symmertic");
	else
		printf("The given matrix is assymertic");
return 0;
}
