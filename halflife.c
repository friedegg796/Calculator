// Halflife, shrimple as that
#include <math.h>
#include <stdio.h>

int main(void)
{
    char yorn; // yes or no
    do
    {
        long double x, y; // our two variables that are calculated
        // x is inital, y is number of halflives
        do
        {
            x = 0;
            y = 0;
            printf("First number X goes through second number Y halflives\n");
            scanf(" %Lf %Lf", &x, &y); // Looks for two numbers
            while (getchar() != '\n'); // Makes sure we don't have bad input
        }
        while (!(x > 0) || !(y > 0)); // Why would we have a negative intial val/halflife
        printf("%Lf\n", x / pow(2, y)); // prints a long double with x divided by 2^y
        printf("Wanna go on?\n");
        scanf(" %c", &yorn); // literally looks for the adress of yorn to put a character in
    }
    while (yorn == 'y' || yorn == 'Y');
}
