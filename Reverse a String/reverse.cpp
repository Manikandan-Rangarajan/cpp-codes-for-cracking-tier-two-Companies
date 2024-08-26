#include <iostream>
using namespace std;

void reverse(string str){
    int len = str.length();
    string reversed = "";
    for(int i = len - 1; i >= 0; i--){
        reversed += str[i];
    }
    cout << "The reversed string is: " << reversed << endl;
}

int main() {
    string str;
    cout << "Enter a string" << endl;
    getline(cin, str); 
    reverse(str);
    return 0;
}
