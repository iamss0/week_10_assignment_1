// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number to check if it is a perfect sqaure; ";
    cin>>x;
    int lo = 0;
    int hi = x;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        long long m = (long long) mid;
        long long y = (long long) x;
        if(m*m == y){
            flag = true;
            cout<<"Yes";
            break;
        }
        else if(m*m > y) hi = mid-1;
        else lo = mid+1; 
    }
    if(!flag) cout<<"NO"<<endl;
}