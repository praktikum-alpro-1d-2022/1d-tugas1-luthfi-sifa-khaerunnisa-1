#include <iostream>

using namespace std;

int main()
{
    cout << "Tanpa Menggunakan Variabel Sementara" << endl;
    cout << "" << endl;
    int r = 4, g = 9;

    cout << "Sebelum Ditukar" << endl;
    cout << "r =" << r << ", g =" << g << endl;

    r = r + g;
    g = r - g;
    r = r - g;

    cout << "Setelah Ditukar" << endl;
    cout << "r = 9, g = 4" << endl;

    return 0;
}
