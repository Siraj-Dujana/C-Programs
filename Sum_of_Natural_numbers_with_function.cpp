#include <iostream>
using namespace std;

// Function to Calculate Sum of Natural Numbers
int calculateSum(int num){
    return num * (num + 1)/2;
}

int main(){
    // User Input
    cout << "Enter a Positive Integer to calculate Sum of natural number: ";
    int num;    cin >> num;

    // Calculate & Output Result
    if( num > 0){
        cout << "Sum of frist " << num << " natural number is: " << calculateSum(num) << endl;
    }
    else{
        cout << "Please, Enter a positive Integer.";
    }

    return 0;
}