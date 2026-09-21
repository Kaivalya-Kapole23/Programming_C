#include <stdio.h>
int main(){
	int A[50] ,n ,i ,pos ,ele;

	printf("Total Number in Arrary ");
	scanf("%d",&n);

	printf("Enter the number in Arrary: ");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);

	printf("Enter the position of number you want to enter");
	scanf("%d",&pos);

	if (pos < 0 || pos > n)
		printf("Invalid position");

	else{
		printf("Enter the element that you want to insert");
		scanf("%d",&ele);

		for(i=n-1 ;i >= pos; i--)
			A[i+1] = A[i];

		A[pos] = ele;

		for(i=0;i<n+1;i++)
			printf("%d",A[i]);
}
return 0;
}
