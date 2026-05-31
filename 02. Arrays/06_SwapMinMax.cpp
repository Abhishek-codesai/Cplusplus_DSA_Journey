#include<iostream>
using namespace std;
void swapMinMax(int arr[],int size){
    if(size<=1) return; //Nothing to swap
    int maxIdx = 0, minIdx = 0;
    for(int i =0; i<size; i++){
        if(arr[i] > arr[maxIdx]){
            maxIdx = i;
        }
        if(arr[i] < arr[minIdx]){
            minIdx = i;
        }
    }
    int temp = arr[maxIdx];
    arr[maxIdx] = arr[minIdx];
    arr[minIdx] = temp;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    swapMinMax(arr,size);
    cout<<"Array after swapping Max & Min : "<<endl;
    for(int i=0; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}