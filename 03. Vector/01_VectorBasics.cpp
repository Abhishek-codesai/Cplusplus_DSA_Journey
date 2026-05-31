#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(5,7);
    for(int val : vec){ //for each loop
        cout<< val <<endl;
    }
    return 0;
}