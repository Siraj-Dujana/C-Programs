#include <iostream>
using namespace std;
int main(){
    int array[3];   // You can increase array range
    int max = array[0], min = array[0]; // assume frist element is both Max & Min

    for (int i = 0; i < sizeof(array) / sizeof(int); i++){
        // User Inputs
        cout << "Enter the element of array : ";
        cin >> array[i];

        // check min & max numbers
        if(array[i] >= max){
            max = array[i]; // Update max num if a larger number is found
        }
        if(array[i] <= min){
            min = array[i]; // Update min num if a smaller number is found
        }
    }

    // Output
    cout << "Maximum Number is : "<< max <<endl;
    cout << "Minimum Number is : "<< min <<endl;
}