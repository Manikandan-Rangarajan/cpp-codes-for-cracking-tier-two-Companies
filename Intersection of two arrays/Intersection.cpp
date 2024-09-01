#include <bits/stdc++.h>
using namespace std;

void Intersection(int arr[], int n, int arr1[], int m) {
    vector<int> intersection; 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i] == arr1[j]) {
                
                intersection.push_back(arr[i]);
                break; 
            }
        }
    }

    if (intersection.empty()) {
        cout << "No common elements found." << endl;
    } else {
        cout << "Intersection of the given arrays: ";
        for (int val : intersection) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n,m;
    cout<<"Enter limits for 2 arrays"<<endl;
    cin>>n>>m;
    int arr[n],arr1[m];
    cout<<"Enter First array's elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter First array's elements"<<endl;
    for(int j=0;j<m;j++){
        cin>>arr1[j];
    }
    Intersection(arr,n,arr1,m);
    return 0;
}
