#include <iostream>

using namespace std;

int main()
{
    cout << "Menggunakan Variabel Sementara" << endl;
    int x = 3, y = 6, temp;

    cout << "Sebelum Ditukar" << endl;
    cout << "x =" << x << ", y =" << y << endl;

    temp = x;
    x = y;
    y = temp;

    cout << "Setelah Ditukar" << endl;
    cout << "x =" << x << ", y =" << y << endl;

    return 0;
}
