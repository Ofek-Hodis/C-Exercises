#include <stdio.h>
#include <time.h>

double puissance(double x, int n)
{
    if (n == 0) return 1;
    return x*puissance(x, n-1);
}

double puissance_rapide(double x, int n)
{
    if (n == 0) return 1;
    if (n%2 ==0)
    {
        double res = puissance_rapide(x, n/2);
        res *= res;
        return res;
    }
    double res = puissance_rapide(x, (n-1)/2); // We could write n/2 because we're dividing an integer
    res *= res;
    res *= x;
    return res;
}

int fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n-1) + fibo(n-2);
}

int fibo_iter(int n)
{
    int value=0;
    int t[n+1];
    t[0] = 0;
    t[1] = 1;
    for (int i=2; i<=n; i++)
    {
        t[i] = t[i-1] + t[i-2];
    }
    return t[n];
}

int main()
{
    // double n = 0;
    // int power = 1;
    // printf("Enter a number");
    // scanf("%lf", &n);
    // printf("Enter the power");
    // scanf("%d", &power);
    // double res = puissance(n, power);
    // printf("%lf^%d = %lf\n", n, power, res);
    // res = puissance_rapide(n, power);
    // printf("%lf^%d = %lf\n", n, power, res);

    clock_t time_start = clock();
    int res = fibo(30);
    printf("%d\n", res);
    clock_t time_end = clock();
    clock_t time = (time_end - time_start);
    printf("The time the recursive process took was %ld\n", time);


    time_start = clock();
    res = fibo_iter(30);
    printf("%d\n", res);
    time_end = clock();
    time = (time_end - time_start);
    printf("The time the iterative process took was %ld\n", time);
}