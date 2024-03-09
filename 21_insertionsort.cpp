#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{10,2,4,5,8,6};
    int n=arr.size();

    // insertion sort

    for(int i=1;i<n;i++){
        // fetch
        int val=arr[i];
        // compare
        int j=i-1; 
        for(;j>=0;j--){ 
            if(arr[j]>val){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=val;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}