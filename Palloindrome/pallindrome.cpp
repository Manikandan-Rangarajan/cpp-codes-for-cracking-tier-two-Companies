#include <iostream>
using namespace std;

bool pallindrome(string str){
    int i=0;
    int j= str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
  
    string str;
    cout<<"Enter a String"<<endl;
    getline(cin, str);
    if(pallindrome(str)!=1){
        cout<<"The string is not a Pallindrome"<<endl;
    }else{
        cout<<"The string is a Pallindrome"<<endl;
    }
    return 0;
}
