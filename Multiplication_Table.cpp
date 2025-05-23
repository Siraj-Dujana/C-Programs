#include <iostream>
using namespace std;
int main(){
    // User Input
    int num;
    cout << "Enter a number you want to print table : ";
    cin >> num;

    // Printing Table
    for (int i = 1; i <= 10; i++){
        cout << i << " * " << num << " = " << num*i <<endl;
    }
    return 0;
}