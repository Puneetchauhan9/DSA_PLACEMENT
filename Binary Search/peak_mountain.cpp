ECHO is on.

#include<iostream>
using namespace std;
int main(){
    int arr[7] = {2,4,6,8,10,8,5};
    int start = 0 , end = 6 ,mid, peak;
    // while(start<=end){
    //      mid = start + (end-start)/2;
    //     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
    //         cout<<"Peak Element is : "<<arr[mid] <<" at index "<< mid <<" ";
    //         return 0;
    //     }
    //     else if(arr[mid]>arr[mid-1]){
    //         peak = mid;
    //         start = mid+1;
    //     }
    //     else{
    //         end = mid-1;
    //     }
    // }


     while(start<=end){
        mid = start + (end-start)/2;
        if((mid == 0 || arr[mid]<arr[mid-1]) && 
        (mid == 6 || arr[mid]<arr[mid+1])){
             cout<<"minimum is "<<mid<<" ";

        }
        //  else if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
        //     cout<<"minimum is "<<mid<<" ";
         
         else if(arr[mid]>arr[mid-1]){
           end = mid-1;
         }
         else{
             start = mid+1;
         }
       } 
       return -1;
    }
