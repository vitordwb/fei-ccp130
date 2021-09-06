#include <stdio.h>
#include <string.h>

int main() {
	int n=4, matiz[n][n];
 
    // set all slots as 0
    memset(matiz, 0, sizeof(matiz));
 
    // Initialize position for 1
    int i = n / 2;
    int j = n - 1;
 
    // One by one put all values in magic square
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) // 3rd condition
        {
            j = n - 2;
            i = 0;
        }
        else {
            // 1st condition helper if next number
            // goes to out of square's right side
            if (j == n)
                j = 0;
 
            // 1st condition helper if next number
            // is goes to out of square's upper side
            if (i < 0)
                i = n - 1;
        }
        if (matiz[i][j]) // 2nd condition
        {
            j -= 2;
            i++;
            continue;
        }
        else
            matiz[i][j] = num++; // set number
 
        j++;
        i--; // 1st condition
    }
 
    // Print magic square
    printf("The Magic Square for n=%d:\nSum of "
           "each row or column %d:\n\n",
           n, n * (n * n + 1) / 2);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d ", matiz[i][j]);
        printf("\n");
    }
}
	
	return 0;
}
