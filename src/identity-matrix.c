#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int** identity_matrix(int n);

int main(){

    int n; /* matrizes NxN  */
    scanf("%d",&n);
    int** id = identity_matrix(n); 

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            printf("%d\n",id[i][j]);


}
int** identity_matrix(int n){
    int **v;
    v = malloc(n*sizeof*v);
    for(int i=0;i<n;i++){
        v[i] = malloc(n * sizeof * v[i]);
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(i==j) v[i][j] = 1;
            else v[i][j] = 0;
        }
    return v;
}
