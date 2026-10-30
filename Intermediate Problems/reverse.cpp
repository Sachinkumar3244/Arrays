#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr = {50,40,30,20,10};
    print(arr);
    int i =0, j= arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;

    print(arr);
}
}