

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All three numbers are equal.\n");
    } else if (a == b) {
        if (a > c)
            printf("Two numbers (%d and %d) are equal and greater than %d.\n", a, b, c);
        else if (a < c)
            printf("Two numbers (%d and %d) are equal but smaller than %d.\n", a, b, c);
        else
            printf("Two numbers (%d and %d) are equal to %d.\n", a, b, c);
    } else if (b == c) {
        if (b > a)
            printf("Two numbers (%d and %d) are equal and greater than %d.\n", b, c, a);
        else if (b < a)
            printf("Two numbers (%d and %d) are equal but smaller than %d.\n", b, c, a);
        else
            printf("Two numbers (%d and %d) are equal to %d.\n", b, c, a);
    } else if (a == c) {
        if (a > b)
            printf("Two numbers (%d and %d) are equal and greater than %d.\n", a, c, b);
        else if (a < b)
            printf("Two numbers (%d and %d) are equal but smaller than %d.\n", a, c, b);
        else
            printf("Two numbers (%d and %d) are equal to %d.\n", a, c, b);
    } else {
        if (a > b && a > c)
            printf("%d is the maximum number.\n", a);
        else if (b > a && b > c)
            printf("%d is the maximum number.\n", b);
        else
            printf("%d is the maximum number.\n", c);
    }

    return 0;
}

