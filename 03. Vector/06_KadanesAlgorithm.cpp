#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ms=INT_MIN; //maximum sum
    int cs=0; //current sum
    for(int i=0; i<size; i++){
        cs += arr[i];
        ms = max(cs,ms);
        if(cs<0) cs = 0;
    }
    cout<<"Maximum subarray sum : "<<ms<<endl;
    return 0;
}