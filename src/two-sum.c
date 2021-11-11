/**
   outputs the two elements in the array that equals
   the sum
**/
#include<stdio.h>

int main(){
  int arr[6] = {1,2,3,4,5,6};
  int sum = 6;
  for(int i=0; i < 6 ; ++i){
    for(int j=0;j<6;++j){
      if(arr[i] + arr[j] == sum){
        printf("%d + %d = %d \n",arr[i],arr[j], sum);
      }
    }
  }
  
  return 0;
}
