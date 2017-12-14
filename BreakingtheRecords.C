#include<stdio.h>
#include<stdlib.h>
int main(){
    int *s;
	int i,hs=0,ls=0,x,y,n;
    scanf("%d",&n);
    s = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
	i=1;
	x = s[0];
	y = s[0];
	while(i<n){
		if(x<s[i]){
			hs++;
			x = s[i];
		}
		else if(y>s[i]){
			ls++;
			y = s[i];
		}
		else
			i++;
	}
	printf("%d %d",hs,ls);
	return 0;
}