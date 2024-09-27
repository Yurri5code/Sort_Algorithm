#include <stdio.h>
#include <stdlib.h>

void insertionSort(int n,int* arr) {
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

/* nouvelle fonction elle prend seulement le dernier element du tableau et le place a l'endroit ideal pour trier le tableau 
tout en suposant que le tableau est presque trie a la difference d'un seul element qui a la fin du tableau
a chaque tour le tableau est afficher 
* a noter : que dans cette fonction une fois que le test n'est pas verifier la valeur courante est afficher deux fois 
*/
void insertionSort1(int n, int arr_count, int* arr) {
   int cle = arr[n - 1],i = n - 2;

    while(cle<arr[i]){
        arr[i + 1] = arr[i];
        i--;
        for(int i = 0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    arr[i +1] = cle;
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
/*
2 4 6 8 3
3 est mis en avant 
cle = 3 
dans la boucle 
deplacement vers la gauche 
*/

// ajout de la fonction du tri par insertion qui fonction sur le meme mode que insertionSort1
void insertionSort2(int n, int arr_count, int* arr) {
    for(int i = 1;i<n;i++){
        int cle = arr[i];
        int j = i -1;
        while(j>= 0 && arr[j]>cle){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = cle;
        for(int i =0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int tab[5] = {2,4,6,8,3};
        int taille = sizeof(tab) / sizeof(tab[0]);
        printf("taille du tableau : %d et taille du premier element : %d\n",sizeof(tab),sizeof(tab[0]));
    insertionSort(taille,tab);
    inertionSort(taille,taille,tab);
    return 0;
}
