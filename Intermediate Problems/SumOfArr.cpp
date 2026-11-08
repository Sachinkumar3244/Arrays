#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 8, 9,4};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum += arr[i];
        
    }
    cout<<"Sum : "<<sum;

}