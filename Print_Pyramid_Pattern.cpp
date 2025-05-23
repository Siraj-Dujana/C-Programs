#include <iostream>
using namespace std;
int main(){
    int rows;
    cout <<"Enter Number Of rows: ";
    cin >> rows;
    cout<<endl;

    for (int i = 1, k = 0; i <= rows; i++, k = 0) {
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        while(k != 2 * i -1){
            cout << i << " ";
            ++k;
        }
        cout <<endl;
    }
    return 0;
}