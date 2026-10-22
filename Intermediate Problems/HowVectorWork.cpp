#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(6); //1 + 7 = 8 Element and size = 7 *2 = 14
    cout<<v.size()<<" "<<v.capacity()<<endl;
}
