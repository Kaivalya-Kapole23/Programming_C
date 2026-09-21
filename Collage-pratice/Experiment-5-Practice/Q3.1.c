//Develop a C program to use a loop and the continue statement to display all
//uppercase and lowercase letters along with their ASCII values. Handle non-alphabetic ASCII
//values between 91 and 96 by skipping them. (Hint: ASCII value of 'A' = 65, 'a' = 97)
#include <stdio.h>
int main(){
for(char c='A';c<='z';c++){
    if (c>=91 && c<=96)
    continue;
    printf ("The ASCII value of %c is %d\n",c,c);
}
return 0;}
