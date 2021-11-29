#include <stdio.h>
#include <math.h>

int fatorial(int n){
    int curr = n;
    int f = 1;
    while(curr > 0) {
        f *= curr;
        curr--;
    }
    return f;
}

float exponencial(float x){
    float exp = 1;
    for(int i=1; i <= 9; i++){
        exp += pow(x, i)/fatorial(i);
    }
    return exp;    
}

int main(){
    int x;
    printf("Digite x: \n");
    scanf("%d", &x);
    printf("cosh(%x)%f",(exponencial(x) + exponencial(-x))/2);
    return 0;
}