// Lab_04.4 cpp
// Качмар Владислав
// Лабораторна робота № 04.4
// Варіант 12

#include <iostream>
#include <cmath>
#include <iomanip> // Для гарного форматування таблиці (setw, setprecision)

using namespace std;

int main()
{
    double R;     // вхідний параметр
    double xp; // xпоч
    double xk;   // xкінц
    double dx;    // крок
    double y;     // результат обчислення

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

   
    cout << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(12) << "X" << " |" << setw(10) << "Y" << " |" << endl;
    cout << "---------------------------" << endl;

    cout << fixed << setprecision(2); // Округлення до 2 знаків після коми

    
    for (double x = xp; x <= xk + dx / 2.0; x += dx)
    {
        
        if (x <= -6)
            y = R;
        else if (-6 < x && x <= -R)
            y = (x + R) / (6 - R);
        else if (-R < x && x <= 0)
            y = R - sqrt(R * R - (x + R) * (x + R));
        else if (0 < x && x <= R)
            y = sqrt(R * R - x * x);
        else
            y = -(x - R);

        
        cout << "|" << setw(12) << x << " |" << setw(10) << y << " |" << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}