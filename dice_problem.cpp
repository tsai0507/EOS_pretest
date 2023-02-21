#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define target_num 5
#define target_sum 15
#define biggist 6

void compute(int*** result, int* array, int* size, int num, int sum, int start);
int** combine(int* size);

int main(int argc, char **argv){
    
    int** result = NULL;
    int size = 0;
    result = combine(&size);
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < target_num; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    printf("size is %d\n", size);

    return 0;
}

void compute(int*** result, int* array, int* size, int num, int sum, int start){
    if( (target_sum == sum) && (target_num  == num) ){
        *result = (int**)realloc(*result, (*size+1) * sizeof(int*));
        (*result)[*size] = (int*)malloc(target_num * sizeof(int));
        memcpy((*result)[*size], array, target_num * sizeof(int));
        (*size)++;
        return;
    }
    if(num == target_num) return;
    for(int i = start; i <= biggist; i++){
        if( (sum + i) >  target_sum) break;
        array[num] = i;
        compute(result, array, size, num+1, sum+i, i);
    }
}
int** combine(int* size){

    int** result = NULL;
    int* array = (int*)malloc(target_num * sizeof(int));
    compute(&result, array, size, 0, 0, 1);
    return result;
}
