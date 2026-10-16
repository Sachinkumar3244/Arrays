#include<iostream>
#include<vector>
using namespace std;
int zeros = 0, ones = 0;
void segregate0and1(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) zeros++;
        else
        ones++;
    }
    for(int i=0;i<zeros;i++){
        arr[i] = 0;
    }
    for(int i=zeros;i<arr.size();i++){
        arr[i] = 1;
    }
}

int main(){
    vector<int> arr = {1,0,0,1,1,0,1,0};
    segregate0and1(arr);
    cout<<"Array After segregation :";

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}