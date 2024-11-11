#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    int V, S;

    V = a * b * c;

    S = 2 * (a * b + a * c + b * c);

    printf("V = %d\n", V);
    printf("S = %d\n", S);

    return 0;
}