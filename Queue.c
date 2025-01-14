#include <stdio.h>
#include <stdlib.h>

struct node{
    int x;
    int y;
    struct node* next;
};

struct node* create_node(int xx, int yy);       //function protypes
void addQ(int x, int y);                         //function protypes
void print_Queue();                              //function protypes
void removeQ();                                  //function protypes

struct node* top=NULL;                           //global pointer set as NULL

void main(void){
    addQ(1,2);
    addQ(3,4);
    addQ(5,6);
    addQ(7,8);
    addQ(33,44);
    print_Queue();
    removeQ();
    printf("After removing\n");
    print_Queue();

}

struct node* create_node(int xx, int yy){
    struct node* tmp;
        
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->next=NULL;
    tmp->x=xx;
    tmp->y=yy;

    return(tmp);
}

void addQ(int x, int y){
    if(top == NULL){
        top = create_node(x,y);
    }else{
        struct node* ptr;
        for(ptr=top; ptr->next != NULL; ptr=ptr->next); //to find the end of the list created
        ptr->next = create_node(x,y);        
    }
}

void removeQ(){
    if(top==NULL){
        printf("Queue is empty, nothing to remove");
        return;
    }    
    struct node* temp=top;
    top=top->next;     // Move the top to the next node
    free(temp);      // Free the memory of the removed node
}

void print_Queue(){
    struct node *tmp;
    for(tmp=top; tmp!= NULL; tmp=tmp->next){
        printf("-----------------\n");
        printf("|x =%3d| |y =%3d|\n", tmp->x,tmp->y);
        printf("-----------------\n");
    }
}
