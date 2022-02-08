#include <stdio.h>

void insertion_sort(int s[], int n);

int main(){
    int s[] = {1,2,0,6,4,9,5,7,6};
    int n = 9;

    insertion_sort(s,n);

    for(int i=0;i<n;i++){
        printf("%d \n", s[i]);
    }
}
void insertion_sort(int s[], int n){

    int i,j; /* counters */

    for(i=1; i < n; i++){
        j=i;
        while((j>0) && (s[j] < s[j-1])){
            int tmp_s = s[j];
            s[j] = s[j-1];
            s[j-1] = tmp_s;
            j = j-1;
        }
    }
}

