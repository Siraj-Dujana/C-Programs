#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    sort(str.begin(), str.end());

    cout << "Decending order: " << str <<endl;
    return 0;
}