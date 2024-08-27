#include <iostream>
using namespace std;

int main() {
   
    int i,n,mis,count,tot;
    cout<<"Enter a Number(should be n-1):: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements (1 to n, with one missing):  "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    tot = ((n+1)*(n+2))/2;
    
    for(i=0;i<n;i++){
        count+=arr[i];
    }
     mis = tot-count;
    cout<<mis<<"iss the missing number in the arrray"<<endl;
    return 0;
}
