#include<iostream>
#include<vector>
using namespace std;

int fingEquilibrium(vector<int> &arr){
    long long totalSum = 0;
    long long leftSum = 0;

    for(int i=0;i<arr.size();i++){
        totalSum += arr[i];
    }

    for(int i=0;i<arr.size();i++){
        long long rightSum = totalSum - leftSum - arr[i];
        if(leftSum==rightSum){
            return i;
        }
        leftSum += arr[i];

    }
    return -1;

}

int main(){
    vector<int> arr {1,2,0,3};
   int ans = fingEquilibrium(arr);
    cout<<ans<<" ";
}