#include <iostream>
#include <string>
using namespace std;

int main() {
    string namadepan = "dinda";
    string namabelakang = "cantik";

    string gabung1 = namadepan.append(" ").append(namabelakang);
    string gabung2 = namadepan + " " + namabelakang;

    cout << gabung1 << endl;
    cout << gabung2 << endl;
    return 0;
}
