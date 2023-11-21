#include <stdio.h>
#include <stdlib.h>

int x[9], n = 8;
int solutie(int k){

    if(k==n+1) return 1;

    return 0;

}

void afiseaza(){

    char a[9][9];

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            a[i][j] = '0';
        }
    }

    for(int i = 1; i<=n;i++){
        a[i][x[i]] = 'r';
    }

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

}


int verificare(int k){

    for(int i = 1; i<k; i++){

        if(x[k] == x[i]) return 0;
        if(k-i == abs(x[i]-x[k])) return 0;

    }

    return 1;

}

void regine(int k){

    if(solutie(k)){

        afiseaza();

    }
    else{

        for(int i = 1; i<=n;i++){

            x[k] = i;
            if(verificare(k)){

                regine(k+1);

            }

        }

    }

}

int main() {

    regine(1);

    return 0;
}
