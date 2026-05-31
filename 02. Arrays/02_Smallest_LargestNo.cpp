#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<5 ; i++){
        if(arr[i] < smallest ){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"Smallest element is : "<<smallest<<endl;
    cout<<"Largest element is : "<<largest<<endl;
    return 0;
}