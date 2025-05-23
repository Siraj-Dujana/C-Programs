 #include <iostream>
 using namespace std;
 int main(){
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;
    cout<<endl;

    for (int i = 1, k = 0; i <= rows; i++, k = 0) {
        for (int space = 1; space <= rows - i; space++) {
            cout <<"  "; //Double Space
        }

        while (k != 2 * i -1){
            cout << "*" << " ";
            ++k;
        }
        cout <<endl;
    }
    return 0;
 }