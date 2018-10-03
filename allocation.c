#include <stdio.h>
#include <stdlib.h>

int main(){

    int* i = malloc(sizeof(int));
    *i= 24;
    printf("== *i: %d\n", *i);
    printf("== sizeof(int): %lu\n", sizeof(int));


    int n = 32;
    int* nums = malloc(n * sizeof(int));
    printf("== nums: %p\n" , nums);
    printf("== &nums[0]: %p\n" , &nums[0]);

    *nums =1000000;
    printf("== &nums[0]: %p\n" ,  &nums[0]);

    *(nums +10) = 200000;
    printf("== &nums[10]: %p\n" , &nums[10]);

    int arr[10];

    free(i);
    free(nums);
}