#include <stdio.h>

int factorial(int n){
  if(n<=1) return 1;
  return n*factorial(n-1);
}
int non_recursive_factorial(int n){
    int res = 1;
    for (int i = 2 ; i <= n ; i++)
        res *= i;            
    return res;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n",factorial(n));
  printf("%d\n",non_recursive_factorial(n));

}
