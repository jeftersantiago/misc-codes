#include <stdio.h>

int main () {
  int n=10;
  int list[] = {9,8,7,6,5,4,3,2,1,0};
  int tmp=0;
  for(int i=0; i<=n/2;i++){
    tmp=list[i];
    list[i]=list[n-i-1];
    list[n-i-1]=tmp;
  }
  for(int j=0;j<n;++j){
    printf("%d \n", list[j]);
  }
  return 0; 
}
