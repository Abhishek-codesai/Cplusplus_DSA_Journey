#include<iostream>
using namespace std;
int linearSearch(int arr[],int size ,int target){
    for(int i=0 ; i<size ; i++){
        if( arr[i] == target){
            return i; //FOUND
        }
    }
    return -1; //NOT FOUND
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 3;
    cout<<"Search index : "<<linearSearch(arr,size,search);
    return 0;
}