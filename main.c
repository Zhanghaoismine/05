#include <stdio.h>

int main(int argc, char *argv[]) {
    int a;
    printf("input an integer:");
    scanf("%d", &a);
    if (a >= 0) {
        printf("%d\n", a);
    } else {
        printf("%d\n", -a);
    }
    return 0;
}
