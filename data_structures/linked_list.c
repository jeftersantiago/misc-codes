#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>  
#include<time.h>

typedef struct node * Node;
struct node{
    int key;
    Node next;
};


typedef struct linked_list * List;

struct linked_list{
    Node head;
    Node tail;
    int size;
};

List list_generate(){
    List l = malloc(sizeof(struct linked_list));
    if(l != NULL) {
        l->head = NULL;
        l->tail = NULL;
        l->size = 0;
    }
    return l;
}
bool list_empty(List l){
    return (l->size == 0);
}
void list_push_back(List l, int i){
    Node new_node = malloc(sizeof(struct node));

    new_node->key = i;
    new_node->next = NULL;

    if(!list_empty(l)){
        l->tail->next = new_node;
        l->tail = new_node;
    } else {
        l->head = new_node;
        l->tail = new_node;
    }
    l->size++;
}

void list_push_front(List l, int i){
    Node new_node = malloc(sizeof(struct node));

    new_node->key = i;
    new_node->next = l->head;

    l->head = new_node;

    if(!list_empty(l)) l->tail = new_node;
    l->size++;
}


int main(){
    srand(time(0));
    List list = list_generate();

    printf("Lista:\n[");
    for(int i = 0; i < 50; i++){
        int key = rand() % 100;
        printf("%d ", key);
        list_push_back(list, key);
    }
    printf("]\n");
    return 0;
}
