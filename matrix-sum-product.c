#include <stdio.h>

#define n 2 

int main(){
  //  int n = 2;
  int a[n][n] = {{1,2},{3,4}};  
  int b[n][n] = {{6,7},{8,9}};  
  int s[n][n] = {{0,0},{0,0}};
  int p[n][n] = {{0,0},{0,0}};
 
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      s[i][j] = a[i][j] + b[i][j];
    }
  }
  printf("%d %d \n%d %d\n",s[0][0],s[0][1],s[1][0],s[1][1]);

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      p[i][j]=0;
      for(int k=0;k<n;k++){
        p[i][j] = p[i][j] + a[i][k]*b[k][j];
      }
    }
  
  printf("==============\n");
  printf("%d %d \n%d %d\n",p[0][0],p[0][1],p[1][0],p[1][1]);

  return 0; 
}
