#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;
    cout <<endl;

    int i, j;
    
    for (int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        int space = 2 * (rows - i);
        for(int j = 1; j <=space; j++){
            cout << " "; //Space
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = rows; i >= 1; i--){
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        int space = 2 * (rows - i);
        for (j = 1; j <=space; j++){
            cout << " "; //Space
        }
        for (j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}