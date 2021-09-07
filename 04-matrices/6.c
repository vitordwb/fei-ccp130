#include<stdio.h>
int main(){
    int M[20][20];
    int m, n, i, j, s1=0, s2=0, s3=0, set;
    printf("\nEnter the Row and Column sizes of Square Matrix : ");
    scanf("%d %d", &m, &n);

    if(m==n){
        printf("\n\n Enter the Matrix elements one by one \n");
            for (i = 1; i<=m; i++)
                for (j = 1; j<=n; j++)
                    scanf("%d", &M[i][j]);

        printf("\n The Given Matrix is : \n");
            for (i = 1; i<=m; i++){
                for (j = 1; j<=n; j++)
                    printf(" %d ", M[i][j]);
                printf("\n");
            }

        for (i = 1; i <= m; ++i) // For sum of Diagnal
            for (j = 1; j <= n; ++j)
                if (i == j)
                    s1 = s1 + M[i][j];
            for (i = 1; i<=m; i++) { // Checking for sum of each Rows
                for (j = 1; j<=n; j++) {
                    s2 = s2 + M[i][j];
        }
        if (s1 == s2)
            set = 1;
        else {
            set = 0;
        break;
        }
        s2=0;
        }

        for (i = 1; i<=m; i++) { // Checking for sum of each Columns
            for (j = 1; j<=n; j++) {
                s3 = s3 + M[j][i];
        }
        if (s1 == s3)
            set = 1;
        else {
            set = 0;
        break;
        }

        s3=0;
        }
        if (set == 1)
            printf("\n\n The Given Matrix is Magic square");
        else
            printf("\n\n The Given Matrix is not Magic square");
    }
    return(0);
}