#include <iostream>
#include <cmath> 
#include <iomanip> 

using namespace std;

// Функція для обчислення g(a, b, c) 
double g(double a, double b, double c)
{
    return (pow(a, 2) + sin(b) + 1) / (1 + pow(c, 2));
}

int main()
{
    double x, y;

    cout << "x= ";cin >> x;
    cout << "y= "; cin >> y;
    double P = (g(pow(x, 2), 1, y) - g(pow(y, 2), x, 1)) / (1 + g(sqrt(x), y, 1));
    cout << "P= " << P << endl;
    return (0);
}