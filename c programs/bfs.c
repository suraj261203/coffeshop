#include <stdio.h>
int queue[100] = {0}, front = 1, rear = 1;
int visited[10];
int count = 1;
void bfs(int g[5][5], int v, int u){
       if(count == v)
        return;
       for(int i = 0; i < v; i++){
             if(visited[i] == 0 && g[u][i] == 1){
                    visited[i] = 1;
                    count++;
                    queue[rear++] = i;
} }
       bfs(g, v, queue[front++]);
}
int main(){
       int a[5][5] = {{0,1,0,0,0},{1,0,0,1,0},{0,0,0,0,1},{0,1,0,0,1},{0,0,1,1,0}};
       int v = 5;
    visited[0] = 1;
    bfs(a,v,0);
    for(int i = 0; i< v; i++){
        printf("%d ", queue[i]);

    }
    printf("\n");

}
