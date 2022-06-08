#include<stdio.h> 
#include<iostream>

int main() {
    int n;
    scanf("%d", &n);
    int r[n];
    int i = 0;
    while(i < n) {
        int x,y;
        scanf("%d %d", &x,&y);
        int d = std::min(x,y);
        while(d != 0 ){
            d = x % y ;
            x = y ;
            y = d;
        }
        r[i] = x;
        i++;
    }
    for(int i=0;i<n;i++)
        printf("%d\n", r[i]);
    return 0;
}
