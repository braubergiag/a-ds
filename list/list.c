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

    Data test[] = {1,2,3,4,5};
    for (size_t i = 0; i < sizeof(test)/sizeof(test[0]); ++i){
        push(&list,test[i]);
        print(list);
    }


}