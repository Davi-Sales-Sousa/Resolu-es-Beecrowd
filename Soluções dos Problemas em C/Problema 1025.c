#include <stdio.h>
#define and &&
#define or ||


void quickSort(int *V, int left, int right);
int buscaBinaria(int *V, int elemento, int tamanho);

int main(){
	int N,Q,number,y;
	int i,pos,casos=1;
	
	while(1){
		scanf("%d %d",&N,&Q);
		if(N == 0 and Q == 0) break;
		int marmores[N];
		for(i = 0; i < N; i++){
			scanf("%d",&marmores[i]);
		}
		quickSort(marmores,0,N-1);
		printf("CASE# %d:\n",casos);
		for(i = 0; i < Q; i++){
			scanf("%d",&number);
			y = buscaBinaria(marmores,number,N);
			
			if(y != -1){
			    if (marmores[y - 1] == marmores[y]){
				    while (marmores[y - 1] == marmores[y])
					    y--;
			    }
				printf("%d found at %d\n",number,(y+1));
			}
			else
				printf("%d not found\n",number);
		}
		casos++;
	}
	return 0;
}

int partition(int *V, int left, int right){
    int i,j,aux,pivot;

    i = left;
    pivot = V[left];

    for(j = left+1; j <= right; j++){
        if(V[j] <= pivot){
            aux = V[j];
            V[j] = V[++i];
            V[i] = aux;
        }
    }
    V[left] = V[i];
    V[i] = pivot;

    return i;
}

void quickSort(int *V, int left, int right){
    if(left < right){
        int index_pivot = partition(V,left,right);
        quickSort(V,left,index_pivot-1);
        quickSort(V,index_pivot+1,right);
    }
}

int buscaBinaria(int *V, int elemento, int tamanho){
	int left = 0,right = tamanho-1,middle;
	
	while(left <= right){
		middle = (left+right)/2;
		if(elemento == V[middle])return middle;
		else if(V[middle] > elemento) right = middle - 1;
		else if(V[middle] < elemento) left = middle + 1;
    }
	return -1;
}