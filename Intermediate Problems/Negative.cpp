#include<iostream>
using namespace std;
int main(){
    int arr[]  {5,-3,6,8,-2,9};
    int n = sizeof(arr)/4;
    for(int i=0;i<=n;i++){
        if(arr[i] < 0) 
        cout<<arr[i]<<" ";
    }

}