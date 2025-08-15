ECHO is on.

#include<iostream>
using namespace std;
int main(){
    int target = 81 , start = 1 ,end = 80 , mid , ans;

    if(target<=0){
        cout<<"inka koi sqrt inhi ho skta";
    }

    while(start<=end){
      int mid = start + (end-start)/2;
      if(mid*mid==target){
        cout<<" Target is sqrt of :" << mid <<" ";
        return 0;
      }
      else if(mid*mid < target){
        ans = mid;
        start = mid+1;
      }
      else{
        end = mid-1;
      }

    }

    cout<<"sqrt of target is " << ans <<" ";
  

}
