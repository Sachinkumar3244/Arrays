#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]  {5,3,6,8,2,9};
    int n = sizeof(arr)/4;
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max) max = arr[i];
    }
    cout<<max;

}