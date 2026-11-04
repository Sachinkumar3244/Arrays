#include<iostream>
using namespace std;
int main(){
    int arr[]  {5,3,6,8,2,9};
    int n = sizeof(arr)/4;
    int target = 5;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            flag = true;
            break;
        }
    }
    if(flag==true)
    cout<<"Element Found"<<endl;
    else
    cout<<"Not Found";

}