
"Ascending order me:
"Apne side wale se compare kar, agar tu bada hai toh peeche ja, chhote ko aage aane de."
→ Condition: arr[j] > arr[j+1] → swap

'Decreasing order me:
"Apne side wale se compare kar, agar tu chhota hai toh peeche ja, bade ko aage aane de."
→ Condition: arr[j] < arr[j+1] → swap
swapped flag ka matlab — Agar iss pass me kisi ne seat change nahi ki, matlab sab apni jagah pe hai, show khatam."


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


"Bubble Sort in Decreasing Order"
  for(int i = 0; i<=3; i++){  //n-2 yaha n = 5 so 3
    int swapped = 0; 
   for(int j = 0; j<=3-i; j++ ){   //isme he j<= n-2-i
      if(arr[j]<arr[j+1]){
        swap(arr[j] , arr[j+1]);
        swapped = 1;
      }
      
   }
     if(swapped == 0){
        break;
      }
  }

Time Complexity : O(n²) (worst Case ) Best Case(o(n))  
    for(int k =0; k<5; k++){
    cout<<arr[k]<<" ";
   }
  
}
