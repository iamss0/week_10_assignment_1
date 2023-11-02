#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int hi = n;
    int lo = 1;
    bool flag = false;
    while(hi>=lo){
        int mid = lo + (hi-lo)/2;
        int x = ((mid)*(mid+1))/2;
        if(x == n){cout<<mid<<endl;
        flag = true;
        break;}
        else if(x>n) hi = mid-1;
        else lo = mid+1;
    }
    if(!flag) cout<<hi<<endl;
}