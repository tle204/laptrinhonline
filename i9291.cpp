#include <stdio.h>
int kt(int a, int b, int c) {
    return a + b > c && a + c > b && b + c > a;
}
int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf(kt(a, b, c)+kt(a, b, d)+kt(a, c, d)+kt(b, c, d)?"S":"N");
}
