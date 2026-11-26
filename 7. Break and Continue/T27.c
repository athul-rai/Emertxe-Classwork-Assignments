// WAP to illustrate the usage of break using a nested loop
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j==3)
            {
                break;
            }
            printf("%d",j);
        }
        printf("\n");
    }

    
    
    return 0;
}