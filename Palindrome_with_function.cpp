#include <iostream>
#include <algorithm> // This library is used for reverse function.

using namespace std;

// Function to check Palindrome
bool isPalindrome(const string& str){
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

// Main Function
int main(){
    // User Input
    string str;
    cout<<"Enter a string to check if it is a Palindrome: ";    getline(cin, str);

    // check and Output result
    if(isPalindrome(str)){
        cout<<"\"" << str << "\" is a Palindrome" << endl;
    }
    else{
        cout<<"\"" << str << "\" is not a Palindrome" << endl;
    }
}