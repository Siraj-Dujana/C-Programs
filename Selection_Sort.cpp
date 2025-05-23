#include <iostream>
using namespace std;
int main(){
    int array[] = {5,2,7,9,4};
    int temp = 0; //Temprary variable for shifting elements

    int size = sizeof(array) / sizeof(array[0]);  //Size of Array

    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}