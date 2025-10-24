#include <stdio.h>

int main(void) {

    int a = 10, res;

    res = a++;
    printf("a is %d, res is %d\n",a, res);

    res = a--;
    printf("a is %d, res is %d\n",a, res);

    res = ++a;
    printf("a is %d, res is %d\n",a, res);

    res = --a;
    printf("a is %d, res is %d\n",a, res);
    
    res = +a;
    printf("+a is %d\n", res);

    res = -a;
    printf("-a is %d\n", res);
    
    return 0;
}