#include <iostream>
using namespace std;
int main(){
    int array[3];   // You can increase size
    int min = array[0]; // Assume frist number is minimum;
    
    // User Inputs & find minimum number 
    for (int i = 0; i < sizeof(array) / sizeof(int); i++){
        cout << "Enter the element of array : ";
        cin >> array[i];

        // check Minimum number
        if(array[i] <= min){
            min = array[i]; // Update Min Number if smaller element is found
        }
    }

    // Output
    cout << "Minimum number is : " << min <<endl;
    return 0;
}