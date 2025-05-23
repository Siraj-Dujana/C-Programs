#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str; // String to store value
    cout << "Enter a String: ";
    cin >> str;

    sort(str.begin(), str.end());

    cout << "Ascending Order: " << str;
    return 0;
}