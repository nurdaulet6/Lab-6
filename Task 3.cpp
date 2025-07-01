#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    if (str.empty())
        return "";
        
    return reverseString(str.substr(1)) + str[0];        
}

int main() {
    string input;
    cout << "Enter a string (max 50 characters): ";
    getline(cin, input);

    if (input.length() > 50) {
        cout << "Error: String too long" << endl;
        return 1;
    }

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}