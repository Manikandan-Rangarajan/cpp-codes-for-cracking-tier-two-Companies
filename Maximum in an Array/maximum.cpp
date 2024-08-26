#include <iostream>
using namespace std;

void maximum(int arr[],int n){
    int i=0,max=arr[0];
    for(i;i<n;i++){
        if(max>arr[i]){
            max = arr[i];
        }
    }
    cout<<"The Maximum of the given array is: "<<max<<endl;
}

int main() {
    int n;
    cout<<"Enter Limit of Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    maximum(arr,n);
    return 0;
}
