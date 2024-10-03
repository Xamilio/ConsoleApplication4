#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A = 56;
    cout << (-137 <= A <= -51 || 55 <= A && A <= 123);

    int X;
    int Y;
    int Z;
    cout << "Введите X: ";
    cin >> X;
    cout << "Введите Y: ";
    cin >> Y;
    cout << "Введите Z: ";
    cin >> Z;
    cout << ((X % 5 == 0) + (Y % 5 == 0) + (Z % 5 == 0) == 1);

    cout << "Введите X: ";
    cin >> X;
    cout << "Введите Y: ";
    cin >> Y;
    cout << "Введите Z: ";
    cin >> Z;
    cout << ((X >= 80) || (Y >= 80) || (Z >= 80));
}
