#include <iostream>
using namespace std;
int main(){
    int array[] = {2,8,5,3,1};

    int n = sizeof(array) / sizeof(array[0]);   //Size of Array

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];    //Temprary store array[j] value in temp variable for interchange
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for(int k=0; k<n; k++){
        cout<< array[k] <<" ";
    }
    cout<<endl;
}