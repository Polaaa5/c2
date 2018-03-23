#include <stdio.h>

int main(void) {
int i = 365; 
int j = 7; 
i = i + j - i %j; 
printf("Result of division %i\n", i);

int x = 12258; 
int y = 23; 
x = x + y - x %y; 
printf("Result of division %i\n", x); 

int a = 996; 
int b = 4; 
a = a + b - a %b; 
printf("Result of division %i", a); 
return 0;
}