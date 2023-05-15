#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, sub;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the substring: ";
    getline(cin, sub);
    size_t pos = str.find(sub);
    if (pos != string::npos) {
        cout << "Substring found at position " << pos << endl;
    } else {
        cout << "Substring not found" << endl;
    }
    return 0;
}