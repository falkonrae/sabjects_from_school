#include <iostream>
#include <math.h>
using namespace std;
#define E 1e-5

int main()
{
    float x, y = 0, a, b;
    int n = 0;
    cout << "x = ";
    cin >> x;
    a = x;
    b = log(1 - x);
    while (fabs(a) >= E)
    {
        y += a;
        n++;
        a = a * x * n /(n + 1);
    }
    y = y * (-1);
    cout << "\ny(x) = " << y << "\n";
    cout << "\nln(1 - x) = " << b << "\n";
    return (0);
}