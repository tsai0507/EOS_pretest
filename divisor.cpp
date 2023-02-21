#include <stdio.h>
#include <stdlib.h>

int Div(int a, int b);

int main(int argc, char **argv){

    int a ,b;
    printf("please enter number: ");
    scanf("%d %d", &a, &b);
    
    printf("output %d\n",Div(a,b));
    
    return 0;
}
/*
輾轉相除法跟商沒有關係 
輾轉相除法是不斷的取'除數'和'餘數'，直到餘數是0 ，答案取'除數'，就是最大公因數
a = b/c + d
b = d/.. + ..
*/

int Div(int a, int b){
    if( a%b == 0)
        return b;
    else
        return Div(b, a%b);
}
