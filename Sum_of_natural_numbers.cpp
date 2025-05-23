#include <iostream>
using namespace std;
int main(){
    // User Inputs
    int num,    sum = 0;

    cout << "Enter a positive integer to calculate sum of natural numbers : ";
    cin >> num;

    // Calculate and Output results
    if(num >= 0){
        for (int i = 0; i <= num; i++){
            sum = sum + i;
        }
        cout << "Sum of frist " << num << " natural number is : "<< sum <<endl;
    }
    else{
        cout << "Enter a positive integer number please," <<endl;
    }

    return 0;
}