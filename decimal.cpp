#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,c=0,j,l,temp=0,count=1;
    long int a[1000000];
    long long int i=0,s,no;
    scanf("%d",&n);
    while(i>1000)
    {
        s=i;
        no=i;    
        while(s>0)
        {
            c++;
            s=s/10;
        }
        for(j=0;j<c;j++)
        {
            l=no%10;
            
            a[j]=l;
                no=no/10;
        }
        for(j=0;j<c;j++)
        {
            if(a[j]==0 || a[j]==1)
              temp++;  
        }
        while(count<=n){
            
             if(temp==c)
            printf("%lld\n",i);
            count++;
            
        }
        i++;
       
    }
    
    return 0;
}
