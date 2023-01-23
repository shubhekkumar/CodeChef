#include <stdio.h>

int main(void) {
    int i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
         if(x>=67 && x<=45000) 
        printf("yes\n");
        else 
        printf("no\n");
    }
	// your code goes here
	return 0;
}

