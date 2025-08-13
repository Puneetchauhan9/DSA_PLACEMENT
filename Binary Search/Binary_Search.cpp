"Binary Search in C++ ": " 
"Binary search ek efficient searching algorithm hai.

"Ye sirf sorted array pe kaam karta hai (ascending ya descending).

"Idea ye hai: array ko repeatedly half divide karke target dhundhna."




#include<iostream>
using namespace std;
int main() {
    int arr[11] = {2 , 4,5,7,11,17,18,19,23,27,30};
    int target = 11;
    int start = 0 , end = 10;
   
   while(start<=end){
    int mid = (start + end)/2;
    if(arr[mid]<target){
        start = mid+1;
    }
    else if (arr[mid]>target){
      end = mid-1;
    }
    else {
        cout<<"Target is :"<<arr[mid]<<" index is :"<<mid<<" ";
        break;
    }
   }
}



//Binary Search on decreasing order 

 int arr[5] = {30 , 28 , 20 , 16 ,4};

 int start=0 , end=4;
 int target = 28;
 while(start<=end){
    int mid = start + (end-start)/2;

    if(arr[mid]== target){
        cout<<"Got it! "<<target<<" at index"<<mid<<" ";
        return 0;
    }
    else if(arr[mid]<target){
      end = mid-1;
    }
    else{
        start = mid+1;
    }
 }
 cout<<"Target Not Found ";
}
