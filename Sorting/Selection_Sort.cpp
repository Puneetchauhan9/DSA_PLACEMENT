"//  Selection Sort in C++ "

"Selection Sort ek simple algorithm hai jo har round me array ke unsorted part se sabse chhota element dhundta hai aur usko correct position (starting position) pe swap karta hai.
 Ye process array ke har element ke liye repeat hota hai jab tak pura array sorted na ho jaye."

"Algorithm – Selection Sort"
1)Start with the first element i. Assume ye current smallest element ka position hai.

2)Loop j from i+1 to last index, aur check karo kaunsa element smallest hai.

3)Agar koi element arr[j] chhota hai arr[index] se, to index ko update karo.

4)Swap arr[index] with arr[i] → ab i position ka element sorted hai.

5)i ko next position pe le jao aur step 2–4 repeat karo.

6)Outer loop i ke liye n-1 times chalega, kyunki last element apne aap sorted ho jaata hai.

7)Inner loop j har round me i+1 se n-1 tak chalega."

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10, 4, 1, 3, 2, 7};
    int n = 6;

    for(int i = 0; i < n - 1; i++){
        int index = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }

        swap(arr[index], arr[i]);
    }

    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }

    return 0;
}

