#include <stdio.h>       //stack implementation EN20416362 ahmeth j.a
#include <stdlib.h>

struct node{             //creating a structure class
    int x;               // creatiing inteerger variables
    int y;
    struct node *next;       //created a pointer node (special variable pointer varieable) 
};

void push(int x, int y);                    //function protypes
void print_stack(char * str);                //function protypes

struct node *pop(void);                    //function protypes
struct node * create_node(int x, int y);   //function protypes

struct node *top=NULL;

void main(void){
    struct node *tmp;             //created a pointer inside the struct node

//created a push to push new node two integer value to the top of the stack 
    push(1,2);                   
    push(3,4);
    push(5,6);
    push(7,8);
    
    printf("\n");
    print_stack("before the first pop");
    	
    tmp=pop();                       //it will show what will be deleted
    printf("\n");	
    print_stack("after the first pop");
}


struct node *pop(void){
    struct node *tmp;
    tmp=top;
    top = top->next;                 //want somthing to point to next one 
        printf("\n");
        printf("------<<REMOVED>>------\n");  
        printf("   |x = %d| |y = %d|   \n", tmp->x, tmp->y);                    
        printf("-----------------------\n");
       // (*tmp).x,(*tmp).y
        return(tmp);
    }


void push(int x, int y){
    //top = create_node(x,y);
    struct node *tmp;
    if(top == NULL){
	top = create_node(x,y);
	}else{
	
		struct node *ptr;	
		ptr = create_node(x,y);
	//	top= ptr->next;
		ptr->next = top;
		top = ptr;
         //the above line moves the temp pointer to the 
         //next pointer of the last attached node 
	}
}

void print_stack(char * str){
	printf("%s\n",str);  //to print the text inside the print_stack functions
	struct node *tmp;
	for(tmp=top;tmp!=NULL;tmp=tmp->next){
		printf("_______________________\n");  
        printf("   |x = %d| |y = %d|   \n", tmp->x, tmp->y);                    
        printf("_______________________\n");  
	}
}

struct node * create_node(int x, int y){
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->x=x;
    tmp->y=y;
    tmp->next=NULL;
    return(tmp);
}
