#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "aku suka kopi";
    teks.replace(9, 4, "teh");
    cout << teks << endl;
    return 0;
}
