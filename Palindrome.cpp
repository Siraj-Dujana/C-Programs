#include <iostream>
using namespace std;
int main(){
    // user Input
    cout<<"Enter String to check Palindrome: ";
    string str;     getline(cin, str);

    string reverse = "";

    // Loop to reverse store letters in another string
    for(int i = str.length()-1; i >= 0; --i){
        reverse += str[i];
    }

    // Check Palindrome
    if(str==reverse){
        cout<<"Yes, This is Palindrome";
    }
    else{
        cout<<"No, This is not Palindrome";
    }
    return 0;
}