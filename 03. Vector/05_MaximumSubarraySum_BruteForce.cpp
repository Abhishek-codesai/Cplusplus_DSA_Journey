#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ms= INT_MIN; //maximum sum
    for(int start=0; start<size; start++){
        int cs=0; //current sum - reset cs for every new starting index
        for(int end=start; end<size; end++){
            cs += arr[end];
            ms = max(cs,ms);
        }
    }
    cout<<"Maximum subarray sum : "<<ms<<endl;
    return 0;
}