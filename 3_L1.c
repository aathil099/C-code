#include <stdio.h>

void fun();
void fun1();

void main (void) {

    int a=5;
    int result;
    int b=6;

    result = a + b;
    printf("res => %d + %d = %d\n",a,b,result);

    result = result + 1;
    printf("res => %d\n",result);

    if (a>b){
    
        printf("false\n");  
    }else{
        printf("error\n");
    } 
    
    if(a<b){
        printf("true\n");
    }else{
        printf("error\n");
    }

    fun();
    fun1();
}

void fun(){

    int i;
    int num = 10;
    i = 1;

    while(i<=10){
        printf("%d > Nice\n",i);
        i++;
    }
    printf("end\n");    
}

void fun1(){

    int i;
    int j;

    for (i = 0; i <= 5; i++) {
        if(i==0){
            printf("i = %d\n", i);
        }
        else if (i==1){
            printf("i = %d\n", i);
        }
        else if (i==2){
            printf("i = %d\n", i);
        }
        else if (i==3){
            printf("i = %d\n", i);
        }
        else if (i==4){
            printf("i = %d\n", i);
        }
        else if (i==5){
            printf("i = %d\n", i);
        }
    }
    
}