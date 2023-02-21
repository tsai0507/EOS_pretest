#include <stdio.h>
#include <stdlib.h>
#define size 23
#define max 10000

void add(int* a, int* b, int* c);
void multiply(int* a, int* b, int* c);
void trans(int a, int* list);
void print(int* c);

int main(int argc, char** argv){
    int A[size], B[size], C[size], tempC[size];
    for(int i = 0; i < size; i++){
        A[i] = 0;
        B[i] = 0;
        C[i] = 0;
        tempC[i] = 0;
    }
    for(int i = 1; i <= max; i++){
        trans(i, A);
        multiply(A, A, B);
        add(B, tempC, C);
        for(int i = 0; i < size; i++) tempC[i] = C[i]; 
    }
    print(C);

    return 0;
}
void add(int* a, int* b, int* c){
    int carry = 0;
    for(int i = 0; i < size; i++){
        c[i] = a[i] + b[i] + carry;
        if(c[i] >= 10){
            carry = 1;
            c[i] -= 10;
        }
        else carry = 0;
    }
}
void multiply(int* a, int* b, int* c){
    for(int i = 0; i < size; i++) c[i] = 0;
    for(int ai = 0; ai < size; ai++){
        for(int bi = 0; bi < size; bi++){
            c[ai+bi] += a[ai] * b[bi];
            if(c[ai+bi] >= 10){
                c[ai+bi+1] += (c[ai+bi]/10);
                c[ai+bi] = c[ai+bi]%10;
            }
        }
    }
}

void trans(int a, int* list){
    for(int i = 0; i < size; i++) list[i] = 0;
    for(int i = 0; i < size; i++){
        if(a == 0) return ;
        list[i] = a%10;
        a /= 10;
    }
}
void print(int* c){
    int start = 0; 
    for(int i = (size - 1); i >= 0; i--){
        if(c[i] != 0){
            start = i;
            break;
        }
    }
    for(int i = start; i >= 0; i--){
        printf("%d",c[i]);
    }
    printf("\n");
}