// 6.1.cpp - рекурсія

#include <iostream>
#include<iomanip>

using namespace std;

void print1(int* p, const int n, int i)
{
    cout << setw(3) << p[i];
    if (i < n - 1)
        print1(p, n, i + 1);
    else
        cout << '\n';
}

void format_mas(int* p, int n, int& sum, int& k, int i)
{
    if (i < n)
    {
        if (!(p[i] % 2 == 0) || p[i] % 13 == 0) // !(p[i] % 2 == 0) - крім парних; p[i] % 13 == 0 - з індексами, кратними 13
        {
            k++;
            sum += p[i];
            p[i] = 0;
        }
        format_mas(p, n, sum, k, i + 1);
    }
    else
    {
        cout << '\n';
        cout << "quantity - " << k << '\n';
        cout << "sum - " << setw(8) << sum << '\n';
        cout << '\n';
    }
}

void print0(int* p, const int n, int i)
{
    cout << setw(3) << p[i];
    if (i < n - 1)
        print0(p, n, i + 1);
    else
        cout << '\n';
}

void create(int* p, const int size, const int Low, const int High, int i)
{
    p[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        create(p, size, Low, High, i + 1);
}

int main()
{
    srand(unsigned(time(NULL))); // ініціалізація генератора випадкових чисел

    const int n = 25;
    int p[n];
    int sum = 0;
    int k = 0;
    create(p, n, 15, 94, 0); // масив(мінімум 15, максимум)

    cout << setw(3) << "p[] = ";
    print0(p, n, 0); // вивід
    format_mas(p, n, sum, k, 0); // опрацювання

    cout << setw(3) << "p[] = ";
    print1(p, n, 0); // вивід

    getchar();
}
