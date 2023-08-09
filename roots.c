#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter the coefficients a, b, c.\n");
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("The quadratic equation is ----> %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);

    double discriminant;

    printf("finding the discriminant.\n");

    discriminant = (b * b) - (4 * a * c);

    printf("The discriminant of this equation is- %lf\n", discriminant);

    if (discriminant > 0) {
        printf("The roots of this equations are real and distince.\n");
        printf("The roots of this equation are---->\n");

        double root1 = (-b + sqrtl(discriminant)) / (2 * a);
        double root2 = (-b - sqrtl(discriminant)) / (2 * a);

        printf("%lf   %lf", root1, root2);
    }
    else if (discriminant == 0) {
        printf("The roots of this equation are real and equal.\n");
        printf("The roots of this equation are---->\n");

        double root1 = (-b + sqrtl(discriminant)) / (2 * a);

        printf("%lf    %lf", root1, root1);
    }
    else {
        printf("The roots of this equation are imaginary.\n");
        printf("The roots of this equation are---->\n");

        double realPart = -b / (2 * a);
        double imaginaryPart = sqrtl(-discriminant) / (2 * a);

        printf("%lf + %lfi and %lf - %lfi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}