#include<iostream>
#include<vector>
using namespace std;
int MajorityEle(vector<int>nums){
    int n = nums.size();
    int freq = 1, ans = nums[0];
    for(int i=1; i<n; i++){
        if(freq == 0) ans = nums[i];
        if(ans == nums[i]) freq++;
        else freq--;
    }
    return ans;
}
int main(){
    vector<int>nums = {2,1,1,2,2};
    int result = MajorityEle(nums);
    cout<< result <<endl;
    return 0;
}