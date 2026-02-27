#include <complex.h>
#include <math.h>
#include <stdio.h>
// Functions that WE MAKE go here
void add(double x, double y);
void subt(double x, double y);
void multi(double x, double y);
void div(double x, double y);
void rem(double x, double y);
void absdiff(double x, double y);
// They do not go past here
int main()
{

    double x, y; // our two variables that are calculated
    int v;       // wat type of equation do we wanna do
    char yorn;   // yes or no

    do
    {
        printf(
            "1: Addition \n 2: Subtraction\n 3: Multiplication \n 4: Division\n 5: Remainder\n "
            "6: Absolute Difference\n 7: Square Root\n 8: Sine\n 9: Cosine\n 10: Tangent\n"
            "11: Natural Logarithm\n 12: Logarithm of 2\n 13: Logarithm of 10\n 14: Cube Root\n ");

        scanf(" %d", &v);
        while (getchar() != '\n');
    }
    while (!(v == 1 || v <= 11));
    // The while function makes sure we don't get unkewl input, and the getchar function eats away
    // bad input

    // Main loop starts here
    do
    {

        if ((v >= 1 && v <= 6))
        {
            printf("Two numbers go here\n");

            scanf(" %lf %lf", &x, &y);

            switch (v)
            {
                case 1: // Add
                    add(x, y);
                    break;

                case 2: // Subtract

                    subt(x, y);
                    break;
                case 3: // Multiply
                    multi(x, y);
                    break;
                case 4: // Division
                    div(x, y);
                    break;
                case 5: // Remainder
                    printf("%lf\n", fmod(x, y));
                    break;
                case 6: // Absolute difference

                    absdiff(x, y);
                    break;
            }
        }
        else
        {
            printf("Number goes here:\n");
            scanf("%lf", &x);
            switch (v)
            {
                case 7: // Square root
                    printf("%lf\n", sqrt(v));
                    break;

                case 8: // Sine
                    printf("%lf\n", sin(v));
                    break;
                case 9: // Cosine
                    printf("%lf\n", cos(v));
                    break;
                case 10: // Tan
                    printf("%lf\n", tan(v));
                    break;
                case 11: // Natural Log
                    printf("%lf\n", log(v));
                    break;
                case 12: // Base 2 Log
                    printf("%lf\n", log2(v));
                    break;
                case 13: // Base 10 Log
                    printf("%lf\n", log10(v));
                    break;
                case 14: // Cube Root
                    printf("%lf\n", cbrt(v));
                    break;
            }
        }
        printf("Go on? (y/n)\n");

        scanf(" %c", &yorn);
    }
    while (yorn == 'y' || yorn == 'Y');
}

// Functions we made are truly declared here
void add(double x, double y)
{
    printf("%lf\n", x + y);
}
void subt(double x, double y)
{
    printf("%lf\n", x - y);
}
void multi(double x, double y)
{
    printf("%lf\n", x * y);
}
void div(double x, double y)
{
    printf("%lf\n", x / y);
}
void absdiff(double x, double y)
{
    if (x - y < 0)
    {
        printf("%lf\n", -(x - y));
    }
    else
    {
        printf("%lf\n", (x - y));
    }
}
