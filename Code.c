#include <stdio.h>
#include <conio.h>

int main(){
    
    int i, n, x;
    printf("Give a number   :     ");
    scanf("%d", &n);
    x=0;
    if(n==1){
        
        printf("Number is not prime");
        goto s;
    }
    if(n==2){
        
        printf("Number is prime");
        goto s;
    }
    for(i=2;i<=n/2;i++){
                        
        if(n%i==0){
            
            x=1;
            break;
        }
            
    }
    
    if(x==0)
    printf("Number is prime");
    else printf("Number is not prime");
    s: return 0;
}