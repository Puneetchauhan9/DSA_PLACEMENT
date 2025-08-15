"Added Search Insert Position"

#include<iostream>
using namespace std;
int main() {
    int arr[8] = {1,4,6,8,10,14,16,18};
    int target = 5;
    int start = 0 , end = 7;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            cout<<"target is at index:"<<mid<<" ";
            return 0;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
     cout<<"Suitable index For "<<target<< " is "<< start <<" ";

  }
