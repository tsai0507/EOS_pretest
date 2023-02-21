/*
濾除所有質數與質數倍數（2 3 5除外），正整數集合A
A倒數無窮總和為S = m/n
m + n = ans
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 4000

bool checknum(int num);
bool doublechecknum(int num, int* prime, int index_prime);
void add(int** list, int num, int index);
int gcd(int a, int b);

int main(int argc, char **argv){
    int* prime = NULL;
    int* Set = NULL;
    int* final = NULL;
    int index_prime = 0, index_Set = 0, index_final = 0;
    for(int i = 2; i <= max; i++){
        if( (i!=2) && (i!=3) && (i!=5)){
            if(checknum(i)){
                add(&prime, i, index_prime);
                index_prime ++;
            }
            else{
                add(&Set, i, index_Set);
                index_Set ++; 
            }
        }
        else{
            add(&Set, i, index_Set);
            index_Set ++; 
        }           
    }
    for(int i = 0; i < index_Set; i++){
        if(doublechecknum(Set[i], prime, index_prime) == 0){
            add(&final, Set[i], index_final);
            index_final++;
        }
    }
    free(Set);
    free(prime);
    double value = 0;
    int maxgcd = 0;
    for(int i = 0; i < index_final; i++){
        value += 1 / (double)final[i];
        printf("%d %f\n", final[i], value);
    }
    free(final);
    printf("value :%f\n",value);
    maxgcd = gcd(value*10, 10);
    int a = value*10;
    int ans = (a/maxgcd) + (10/maxgcd);
    printf("ans : %d\n", ans);

    return 0;
}
bool checknum(int num){
    for(int i = (num - 1); i > 1; i--){
        if( (num%i) == 0 )
            return 0;
    }       
    return 1;
}
bool doublechecknum(int num, int* prime, int index_prime){
    for(int i = 0; i < index_prime; i++){
        //是質數倍數
        if( (num % prime[i]) == 0 )
            return 1;
    }       
    return 0;
}
void add(int** list, int num, int index){
    *list = (int*)realloc(*list, sizeof(int)*(index+1)); 
    (*list)[index] = num;
}
int gcd(int a, int b){
    if(a%b == 0)
        return b;
    gcd(b, a%b);
}