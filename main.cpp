#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i;
    int n = argc - 1;

    int* pa = new int[n];
    int* start = pa;

    for (i = 0; i < n; i++)
    {
        *pa = atoi(argv[i + 1]);
        pa++;
    }

    pa = start;

    cout << "Original: ";
    for (i = 0; i < n; i++)
    {
        cout << *pa << " ";
        pa++;
    }
    cout << endl;

    pa = start;

    for (i = 0; i < n / 2; i++)
    {
        int temp = pa[i];
        pa[i] = pa[n - 1 - i];
        pa[n - 1 - i] = temp;
    }

    cout << "Reversed: ";
    for (i = 0; i < n; i++)
    {
        cout << pa[i] << " ";
    }
    cout << endl;

    delete[] start;

    return 0;
}
