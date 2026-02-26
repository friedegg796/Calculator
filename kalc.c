#include <math.h>
#include <stdio.h>

int main()
{

    double x, y;
    int v;
    char yorn;
    void add(double x, double y);
    void subt(double x, double y);
    void multi(double x, double y);
    void div(double x, double y);
    void rem(double x, double y);
    void absdiff(double x, double y);

    do
    {
        printf("1: Addition \n 2: Subtraction\n 3: Multiplication \n 4: Division\n 5: Remainder\n "
               "6: Absolute Difference\n 7: Square Root\n 8: Sine\n 9: Cosine\n 10: Tangent\n");

        scanf(" %d", &v);
    }
    while (!(v == 1 || v == 2 || v == 3 || v == 4 || v == 5 || v == 6));
    do
    {
        printf("Two numbers go here\n");

        scanf("%lf %lf", &x, &y);

        if (v == 1)
        {

            {
                add(x, y);
            }
        }
        else if (v == 2)
        {
            subt(x, y);
        }
        else if (v == 3)
        {
            multi(x, y);
        }
        else if (v == 4)
        {
            div(x, y);
        }
        else if (v == 5)
        {
            subt(x, y);
        }
        else if (v == 6)
        {
            absdiff(x, y);
        }
        printf("wanna go on\n");

        scanf(" %c", &yorn);
    }
    while (yorn == 'y');
}

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
