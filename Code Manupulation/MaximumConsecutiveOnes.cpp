#include<iostream>
#include<vector>
using namespace std;
int findmaxConsecutiveOnes(vector<int> &nums){
    int count =0;
    int maxCount=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count = 0;
        }
        maxCount = max(maxCount,count);
    }
    return maxCount;
}

int main(){
    vector<int> nums = {1,1,0,1,1,1,1};
   int ans = findmaxConsecutiveOnes(nums);

    cout<<"Maximum consecutive ones = "<<ans;

    return 0;
}