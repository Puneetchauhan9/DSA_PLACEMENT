"Added Practice Questions"


#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter the Size of array:";
    cin>>n;
    cout<<"Enter All Element Of An Array:";

    for(int i = 0; i<n; i++){
         cin>>arr[i];
    }
    int target;
    cout<<"Enter The Target:";
    cin>>target;

    // First Occurence in an array

    int first = -1 , last = -1 , start = 0 , end = n-1;
 
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"First Occurence Of "<< target <<" is "<< first;

    start = 0;
    end = n-1;
    // code for last ocuurence 
    while(start<=end){
      int mid = start + (end-start)/2;
      if(arr[mid] == target){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
     cout<<endl<<"last Occurence Of "<< target <<" is "<< last;
    

}


// t.c o(logn)
