#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wiggleSort(vector<int> & nums){
    vector<int>temp = nums;
    sort(temp.begin(),temp.end());

    int n = nums.size();

    int mid = (n-1)/2;
    int end = n-1;

    for(int i=0;i<n;i++){
        if(i%2==0){
            nums[i] = temp[mid];
        }
        else{
            nums[i] = temp[end--];
        }
    }
}

int main(){
    vector<int> nums = {1, 5, 1, 1, 6, 4};
    wiggleSort(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}