#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks = "halo dunia";

    for (int i = 0; i < teks.length(); i++)
        teks[i] = toupper(teks[i]);

    cout << teks << endl;

    for (int i = 0; i < teks.length(); i++)
        teks[i] = tolower(teks[i]);

    cout << teks << endl;
    return 0;
}
