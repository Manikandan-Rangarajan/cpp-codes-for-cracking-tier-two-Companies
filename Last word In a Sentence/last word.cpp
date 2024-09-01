#include <iostream>
using namespace std;

string LastWord(string str) {
    int len = str.size();
    string last = "";
    
    while(len > 0 && str[len - 1] == ' ') {
        len--;
    }
    
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            break;
        }
        last = str[i] + last;
    }
    
    return last;
}

int main() {
    string str;
    cout<<"Enetr a sentence:"<<endl;
    getline(cin,str);
    string last = LastWord(str);
    cout<<"The last word in the given sentence is "<<last<<endl;
    return 0;
}
