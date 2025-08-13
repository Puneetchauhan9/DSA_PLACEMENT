//Insertion Sort In C++ 

#include<iostream>
using namespace std;
int main(){
    // int arr[5] = {1,4,6,8,5};
     
   int arr[5] = {4,3,5,1,2};

     
    //  for(int i = 4; i>0; i--){
    //     if(arr[i]<arr[i-1]){
    //         swap(arr[i] , arr[i-1]);
              
    //     }
    //  }

     for(int i = 1; i<5; i++){
     for(int j = i; j>0; j--){
        if(arr[j]<arr[j-1]){
        swap(arr[j] , arr[j-1]);
        }
        else{
            break;
     }
    }
}
    for(int k =0; k<5; k++){
    cout<<arr[k]<<" ";
   }
}
