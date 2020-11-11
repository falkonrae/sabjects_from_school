#include <iostream>
#include <math.h>
using namespace std;
#define E 1e-5

int main()
{
    float x, y = 0, a;
    int n = 0;
    cout << "x = ";
    cin >> x;
    a = (x - 1)/(x+1);
    while (fabs(a) >= E && x > 0)
    {
        y = y + a;
        n++;
        a = a * pow((x-1)/(x+1), 2)*(2*n-1)/(2*n+1);
    }
    y *= 2;
    cout << "\ny(x) = " << y << "\n";
    cout << "\nln(x) = " << log(x) << "\n";
}