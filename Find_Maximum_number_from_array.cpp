#include <iostream>
using namespace std;
int main(){
    int array[3];   // You can increase array size 
    int max = array[0]; // Assume the frist element is maximum

    for(int i = 0; i < sizeof(array) / sizeof(int); i++){
        cout << "Enter the element of array: ";

        //User Input
        cin >> array[i];
        if(array[i] >= max){
            max = array[i]; // Update Max Num if a larger element if found
        }
    }
    // output
    cout << "Maximum number is :" << max <<endl;
}