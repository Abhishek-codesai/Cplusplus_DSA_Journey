#include<iostream>
#include<vector>
using namespace std;
int MajorityEle(vector<int>nums){
    sort(nums.begin(), nums.end()); //sort
    int freq = 1, ans = nums[0];
    for(int val: nums){
        if(nums[i] == nums[i-1]){ freq++;}
        else {
            freq = 1;
            ans = val;
        }
        if(freq > n/2) return ans;
    }
}
int main(){
    vector<int>nums = {2,1,1,2,2};
    int result = MajorityEle(nums);
    cout<< result <<endl;
    return 0;
}