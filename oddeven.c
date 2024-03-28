#include <stdio.h>

int main()
{
    int m, n,r,i;
    printf("Enter the m for the range: ");
    scanf("%d",&m); 
    printf("Enter the n for the range: ");
    scanf("%d",&n); 
    printf("\nDisplay the even numbers between %d and %d are: ",m,n);
    for(i=m; i<=n; i++){
        r=i%2;
        if(r==0)
        {
		
            printf("\n %d",i);
    	}
    
    }
}
