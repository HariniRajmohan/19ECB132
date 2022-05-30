#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <assert.h>// used to verify the assumptions made by program
#include <limits.h>//to set limits of variable datatypes 
#include <stdbool.h>//boolean data types,true-1 and false-0 
int main(){
int n;
int k;
int ans = 0, i, j, t;
scanf("%d %d",&n,&k);
int *a = malloc(sizeof(int) * n);
for(int a_i = 0; a_i < n; a_i++){
scanf("%d",&a[a_i]);
}
for (i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if ((a[i]+a[j])%k==0)
ans++;
}
}
printf("%d\n",ans);
return 0;
}
/*output:-
6
1 2 3 4 5 6 7
15
*/
