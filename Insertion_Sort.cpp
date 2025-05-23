#include <iostream>
using namespace std;
int main(){
    int array[] = {5, 2, 3, 1, 8};
    int size = sizeof(array)/sizeof(array[0]);  //Size of array
    
    int pos = 1;
    while(pos < size){
        int current = array[pos]; //Current Element
        int prev = pos - 1;       //Previous Element

        while(prev >= 0 && current < array[prev]){
            array[prev + 1] = array[prev];
            prev--;
        }

        array[ prev + 1 ] = current;
        pos++;
    }
    // Now print Array
    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}