#include <stdio.h>
#include <stdlib.h>


typedef int Data;
typedef struct Node Node;
struct Node {
    Data data;
    Node * next;
};




void print(Node * list){

    for (Node * p_node = list; p_node != NULL;p_node = p_node->next ){
        printf("%d ", p_node->data);
    }
    printf("\n");
}


void push(Node ** p_list, Data data){
    Node * p = malloc(sizeof(Node));
    p->data = data;
    p->next = *p_list;
    *p_list = p;
}


int main(){

    Node * list = NULL;
    push(&list,1);
    push(&list,0);
    push(&list,42);
    print(list);


}