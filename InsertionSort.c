#include <stdio.h>
#include <stdlib.h>

void insertionSort1(int n,int* arr) {
    for(int i = 1;i<n;i++){
        int cle = arr[i];
        int j = i -1;

        while(j >= 0 && arr[j]>cle){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = cle;
    }

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
/*
2 4 6 8 3
3 en avant
cle = 3;
i = 4;
j = 3;
3>= 0 && 8>3
arr[4] = arr[3]
arr[4] = 8
j = 3-1 = 2

*/
int main()
{
    int tab[5] = {2,4,6,8,3};
        int taille = sizeof(tab) / sizeof(tab[0]);
        printf("taille du tableau : %d et taille du premier element : %d\n",sizeof(tab),sizeof(tab[0]));
    insertionSort1(taille,tab);
    return 0;
}
