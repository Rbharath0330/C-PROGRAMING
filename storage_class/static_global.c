#include <stdio.h>

static int x = 10; 
void func() {
static int x = 5;  
 printf("%d\n", x);
}

int main() {
    func();
    return 0;
}
