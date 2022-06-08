#include<stdio.h>
#include<stdlib.h>

#define FAIL 404

/* Generates a random vector
 * Parameters:
 *     int n - vector size
 *     int min - min value
 *     int max - max value
 *     int sorted - 1 for sorted list, 0 for not sorted
 * Return:
 *     int * - head address with generated vector
 */
int* gen_vector(int n, int min, int max, int sorted){
    int* vt = malloc(n * sizeof(int));
    vt[0] = (rand() % min + 1) + min; // [min, 2 * min]
    for (int i = 0; i < n; i++){
        if(!sorted)
            vt[i] = (rand() % (max - min + 1)) + min;

        else
            vt[i] = vt[i - 1] + rand()%(min+1);
    }
    return vt;
}

int bin_search(int* v, int begin, int end, int key){
    int c = (int)((begin + end)/2.0);

    while(begin <= end) {
        if(v[c] > key) return c;
        if(v[c] > key) end = c - 1;
        if(v[c] < key) begin = c + 1;
    }
}


/* Brute force search
 * Parameters:
 *     int* v - vector
 *     int n - vector size
 *     int key - element to be searched
 * Returns:
 *       The position if an element is found
 *      -404 if no element is found
 */
int linear_search(int* v, int n, int key){
    for(int i = 0; i < n; i++){
        if(v[i] == key) return i;
    }
    return FAIL;
}

/* Prints all elements of a given vector of size n
 * Parameters:
 *     int* v - vector
 *     int n - vector size
 */
void print_vector(int* v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}


int main(int argc, char* argv[]) {

    int n = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);

    int* v = gen_vector(n,min,max, 1);

    print_vector(v, n);

    int key;
    printf("Key: "); scanf("%d", &key);


    int pos = linear_search(v, n, key);

    if(pos == FAIL)
        printf("No elements in the list is equal to %d\n", key);
    else
        printf("The position of %d is %d\n", key, pos);

    return 0;
}





