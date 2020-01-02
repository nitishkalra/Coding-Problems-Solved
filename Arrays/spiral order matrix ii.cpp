
/**
 * @input A : Integer
 *
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns
 */
int ** generateMatrix(int A, int *len1, int *len2) {
    int** a = (int**)malloc(sizeof(int*)*A);
    int i;
    for(i=0;i<A;i++){
        a[i] = (int*)malloc(sizeof(int)*A);
    }
    *len1 = A;
    *len2 = A;
    int x,u,y,v,j,k,z,count=0;
        x = 0;
        u = A-1;
        y = A-1;
        v = 0;
        while(x<=u&&v<=y){
            for(i=v;i<=y;i++){
                a[x][i] = ++count;
            }
            x++;
            for(j=x;j<=u;j++){
                a[j][y] = ++count;
            }
            y--;
            for(k=y;k>=v;k--){
                a[u][k] = ++count;
            }
            u--;
            for(z=u;z>=x;z--){
                a[z][v] = ++count;
            }
            v++;
        }
        return a;
}
