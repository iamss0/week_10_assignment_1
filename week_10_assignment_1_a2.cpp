// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2

#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,1,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    int lower_limit = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == 0) lo = mid+1;
        else if(arr[mid] == 1) hi = mid-1;
    }
    cout<<"no of 1s in the binary array are: "<<(n-lo)<<endl;
}