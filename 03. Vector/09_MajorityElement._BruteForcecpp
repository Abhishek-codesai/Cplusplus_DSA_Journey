#include<iostream>
#include<vector>
using namespace std;
int MajorityEle(vector<int>nums){
    int size = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int ele : nums){
            if(ele == val) freq++;
        }
        if(freq > size/2) return val;
    }
    return -1;
}
int main(){
    vector<int>nums = {2,1,1,2,2};
    int result = MajorityEle(nums);
    cout<< result <<endl;
    return 0;
}