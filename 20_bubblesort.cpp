#include<iostream>
#include<vector>
using namespace std;

/*
int main(){
    vector<int>arr{10,5,3,9,14,2};
    int n=arr.size();

    // bubble sort
    for(int round=0; round<n-1; round++)
    {
        for(int j=0;j<n-round-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // printing

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}
*/


// best case(sometimes not need to sorting at until the end)

int main(){
    vector<int>arr{10,-5,3,-9,14,2};
    int n=arr.size();

    // bubble sort
    for(int round=0; round<n-1; round++)
    {
        int swapcount=0;
        for(int j=0;j<n-round-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapcount++;
            }
        }
         // printing
    if(swapcount == 0){
        break;
    }

    }

    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}
