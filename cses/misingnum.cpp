#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+(n-1));
    for(int i=1;i<=n;i++){
        if(arr[i-1]!=i){
            cout<<i<<"\n";
            break;
        }
    }
}