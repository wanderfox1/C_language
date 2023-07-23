#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define n 2

int main(){
    determ();

}


void determ(){


    int A[n][n] = {{0}};
    for (int i = 0; i < n; i++){

    for (int j = 0; j < n; j++){

        A[i][j] = 1 + rand() % 10;
        printf("%d\t", A[i][j]);
    }

    printf("\n");

    }

    double B[n][2*n] = {{0}};


    for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                B[i][j] = A[i][j];
            }
    }

    for (int i = 0; i < n; i++){

    for (int j = n; j < 2*n; j++){
            if (j == i + n){
                B[i][j] = 1;
            }
    }

    }

//    printf("\nMatrix B \n");
//    for (int i = 0; i < n; i++){
//            for (int j = 0; j < n*2; j++){
//                printf("%lf\t", B[i][j]);
//            }
//            printf("\n");
//    }

    int temp = B[0][0];
    for (int j = 0; j < n*2; j++){
            B[0][j] /= temp;
    }

    temper[0][m] = {{0}};
    for (int m = 0; m < 2*n; m++){
            for (int j = 0; j < n*2; j++){
                temper[0][m] = B[0][j];
            }
    }

    for (int j = 0; j < m; j++){
        temp[0][m] *= B[1][0];

    }





    printf("\nMatrix B \n");
    for (int i = 0; i < n; i++){
            for (int j = 0; j < n*2; j++){
                printf("%lf\t", B[i][j]);
            }
            printf("\n");
    }



}


