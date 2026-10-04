#include <stdio.h>
#include <stdlib.h>

int main() {
    int V, A;
    scanf("%d %d", &V, &A);
    
    int v1,v2;
    int entrada[V];
    int saida[V];
    
    for(int i=0;i<V;i++){
        entrada[i]=0;
        saida[i]=0;
    }
    for(int i=0;i<A;i++){
        scanf("%d %d", &v1, &v2);
        saida[v1]++;
        entrada[v2]++;
    }
    int n=0;
    for(int i=0;i<V;i++){
        if(saida[i]==0){
            n++;
        }
        
    }
    
    printf("%d\n", n);
    
    
    return 0;
}
