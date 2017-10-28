#include <stdio.h>

/*
    Preiau un argument si returnez valoarea sa dubla in spatii
    pentru a lua in considerare si spatiile dintre caracter si
    caracterul cerut */

void print_spaces(int n){
    int i;
    for(i=0;i<2*n;i++){
        printf("%s"," ");
    }
}



void print_char(int n,char c){
    int i;
    for(i=0;i<n;i++){
        (i!=n-1)?printf("%c ",c):printf("%c",c);
    }
}

int main()
{
    int N;
    char C;
    int i;
    scanf("%d %c",&N,&C);

    for(i=N;i>0;i--){
        print_spaces(N-i);
        print_char(i,C);
        printf("\n");
    }

    return 0;
}