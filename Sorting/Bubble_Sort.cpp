#include<iostream>
using namespace std;

int main(){
    int arr[5] ={7,4,8,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = n-2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }
}
