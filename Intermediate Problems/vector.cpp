#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8,-7);    // index 0 to 4
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); //add an element at end;
    arr.push_back(2);
    arr.push_back(9);
    arr.pop_back(); //remove last element at end;
    arr.pop_back();
    arr.push_back(7);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
