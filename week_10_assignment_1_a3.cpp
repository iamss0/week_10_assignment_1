#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{0,0,1,1},{1,1,1,1},{0,1,1,1},{0,0,0,0}};
    int m = 4;  // number of rows
    int n = 4; // number of coloumns
    int lo = 0;
    int hi = n-1;
    int lower_limit = -1;
    int counter = 0;
    int row_counter = 0;
    for(int i = 0;i<m;i++ ){//ye row wise chalega
        lo = 0;
        hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid] == 0) lo = mid+1;
            else if(arr[i][mid] == 1) hi = mid-1;
        }   
        if(counter<(n-lo)){
            counter = n-lo;
            row_counter = i;
        }
    }
    cout<<row_counter;
}