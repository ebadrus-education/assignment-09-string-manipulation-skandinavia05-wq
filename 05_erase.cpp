#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "saya makan ayam goreng";
    teks.erase(5, 6);
    cout << teks << endl;
    return 0;
}
