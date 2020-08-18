#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int s_size, int* s, int d, int m){
        int i=0;
        int counter=0;
        int j=0;
        int x,sum=0;
        for(i=0;i<=n-m;i++){
            for(j=i,x=1;x<=m;x++,j++){
                sum+=s[j];
            }
            if(sum==d){
                counter++;
                
            }
            sum=0;
        }
        
    return counter;
        // Complete this function
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, n, s, d, m);
    printf("%d\n", result);
    return 0;
}