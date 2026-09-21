#include <stdio.h>
int main(){
	int i,A[50],n,no,count=0;

	printf("Total number in Arrary");
	scanf("%d",&n);

	printf("Enter the number in Arrary");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);

	printf("Enter the we want to count the frequency of");
	scanf("%d",&no);

	for(i=0;i<n;i++)
		if(A[i]==no)
			count++;

	printf("The frequency of %d is %d",no,count);

reurn 0;
} 