#include <stdio.h>

int test();

int main(void)
{
    
int x = test(); 
 
 printf("%d", x);
 
 return 0;
}

int test() {
    int x;
    scanf("%d", &x);
    return x;
}
// ./a.out