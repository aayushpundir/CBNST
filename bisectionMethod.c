#include <stdio.h>
#include <math.h>

// This function is made to find the approximate roots of a polynomial equation using the Bisection method.

float function(float x) {
    return (x * x * x -  x - 4);
}

void bisectionMethod(float *x, float a, float b, int *itr) {
    *x = (a + b) / 2;
    ++(*itr);

    printf("Iteration number %3d X = % 7.5f\n", *itr, *x);
}

int main() {
    int itr = 0, maxmitr;
    float x, a, b, allerr, x1;
    printf("Enter the values of a, b\n");
    scanf("%f %f", &a, &b);

    printf("Enter the allowed error\n");
    scanf("%f", &allerr);

    printf("Enter the maximum iterations\n");
    scanf("%d", &maxmitr);
    bisectionMethod(&x, a, b, &itr);

    do {
        if (function(a) * function(x) < 0)
            b = x;
        else 
            a = x;
        bisectionMethod(&x1, a, b, &itr);
        if (fabs(x1 - x) < allerr) {
            printf("After %d iterations, root = %6.4f\n", itr, x1);
            return 0;
        }
        x = x1;
    }
    while (itr < maxmitr);

    printf("The solution does not converge or the iterations are not sufficient");
    return 1;
}