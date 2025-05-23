#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows - i; j++){
            cout << " ";  //Space
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j == 1 || j == 2 * i - 1 || i == rows){
                cout <<"*";
            }
            else{
                cout << " "; //Space
            }
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; --i){
        for (int j = 1; j <= rows - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j == 1 || j == 2 * i - 1){
                cout << "*";
            }
            else{
                cout << " ";  //Space
            }
        }
        cout << endl;
    }
}