#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;
    cout <<endl;

    for (int i = 1; i<= rows; i++){
        for (int j = 1; j<= rows; j++){
            cout << j << " "; //Space
        }
        cout << endl;
    }
    cout << endl;
}