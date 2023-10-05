#include <stdio.h>

int main() {
    int sum = 0;
    int num;

    printf("input a number: ");
    scanf("%d", &num);

    int i;

    for (i = 0; i <= num; i++) { 
        sum = sum + i;
    }

    printf("result is %i\n", sum);
    return 0;
}

