#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "belajar cpp itu menyenangkan";
    string hasil = teks.substr(8, 3);

    cout << teks << endl;
    cout << hasil << endl;
    return 0;
}
