#include <stdio.h>

int v[] = {3, 5, 2, 9, 4, 8, 3, 7};
int v_mult[50];
int v_not_mult[50];

// posicão 0 = mult, posicão 1 = not_mult
int pos[2] = {0,0};

void print_array(int *arr);

int main() {
    //printf("len: %d", sizeof(v)/sizeof(int));
    for (int i = 0; i < sizeof(v)/sizeof(int); i++) {
        printf("i: %d \n", i);
        // printf("val: %d \n", v[i]);
        if (v[i] % 3 == 0) {
            v_mult[pos[0]] = v[i];
            pos[0]++;
        } else {
            v_not_mult[pos[1]] = v[i];
            pos[1]++;
        }
        
        printf("0: %d \n", pos[0]);
        printf("1: %d \n", pos[1]);
        printf("------ \n");
    }
    
    //print array
    // print_array(v_mult);
    // printf("\n");
    // print_array(v_not_mult);
    
    return 0;
}

void print_array(int *arr){
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
}
