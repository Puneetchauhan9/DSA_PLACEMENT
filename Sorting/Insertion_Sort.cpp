"Defination:Insertion sort me hum outer loop 1 se n-1 tak chalate hain. Har step me inner loop i se 1 tak piche chalta hai, left side ke elements se compare karta hai. 
Agar left side wala element bada ho to swap kar dete hain, aur jab swap ruk jaaye (ya chhota element mil jaye) to break kar dete hain.
 Is tarah har step me left side ka portion sorted hota jata hai"

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


"insertion sort decreasing order" 
     for(int i = 1; i<5; i++){
     for(int j = i; j>0; j--){
        if(arr[j]>arr[j-1]){
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
