#include <stdio.h>
int main(){
	int i=0; char A[20],B[20];

	printf("Enter the string ");
	scanf("%s",A);

	while (A[i] != '\0'){
		B[i] = A[i];
		i++;
	}
    B[i]='\0';

	printf("The secound string is  %s \n",B);

return 0;
}
