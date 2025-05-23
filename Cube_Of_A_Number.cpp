#include <iostream>
using namespace std;
int main(){
    int num,  cube;

    cout << "Enter a Number for Cube: ";
    cin >> num;
    cube = num * num * num;

    cout << "The Cube of " <<num<< " is: " << cube;
    return 0;
}