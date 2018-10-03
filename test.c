#include <stdio.h>
#include "student.h"

void make_it_32(int* it){
    *it =32;
}

int main(){
    int i= 16;
    int* i_ptr = &i;

    printf("== i :%d\n",i);
    printf("== i_ptr: %p\n", i_ptr);
    printf("== &i: %p\n",&i);
    printf("== *i_ptr: %d\n ", *i_ptr);


    printf("\n\n");

    make_it_32(&i);

    printf("== i :%d\n",i); 
    printf("== i_ptr: %p\n", i_ptr);
    printf("== &i: %p\n",&i);
    printf("== *i_ptr: %d\n ", *i_ptr);


    struct student s ={.name="Luke Skywalker", .id= 93111111};
    s.gpa=4.0;
    struct student* s_ptr = &s;
    (*s_ptr).gpa = 4.0;

    printf("%s;%f;%d\n",s.name,s.gpa,s.id);

}