#include <math.h>
#include <stdio.h>

int newton_root1(float a, const float epsilon)
{
    float x = a/2, difference;
    float xnew = x;
    do
    {
        x = xnew;
        xnew = (x+a/x)/2;
        difference = fabs(x-xnew);
    }while (difference>=epsilon);
    return x;
}

int newton_root2(float a, const float epsilon)
{
    float x = a/2, difference, xnew;
    while (1)
    {
        xnew = (x+a/x)/2;
        difference = fabs(x-xnew);
        if (difference <epsilon) return x;
        x = xnew;
    }
}

int main()
{
    const float epsilon = 0.0001;
    float a, x;
    printf("Enter the number you would like to find the root of: ");
    scanf("%f", &a);
    x = newton_root1(a, epsilon);
    printf("The root of %f is %f \n", a, x);
    x = newton_root2(a, epsilon);
    printf("The root of %f is %f \n", a, x);
}