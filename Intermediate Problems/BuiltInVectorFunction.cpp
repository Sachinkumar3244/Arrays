#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,3,9,1,2};
    sort(v.begin()+0, v.end()-0);
    for(int ele : v)cout<<ele<<" ";
}