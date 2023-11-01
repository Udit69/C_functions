#include<stdio.h>


int addi(int a, int b){
    return a+b;

}

int subtra(int a, int b){
    return a-b;

}

int multi(int a, int b){
    return a*b;

}
int divi(int a, int b){
    return a/b;


}
int rem(int a,int b){
    return a%b;
}

void main(){


    printf("    1. for addition\n 2. for subtraction\n 3. for multiplication\n 4. for division\n 5. for remainder\n 6. for exit\n");

    int x;
    printf("ENTER ANY DIGIT:-");
    scanf("%d",&x);

    do{
        if (x==1){
            int a;
            printf("ENTER ANY DIGIT:-");
            scanf("%d",&a);
            
            int b;
            printf("ENTER ANY DIGIT:-");
            scanf("%d",&b);
            
            int c = addi(a,b);
            printf("THE SUM OF THESE NUMBERS ARE %d",c);
        }while (x!=5);
        


    }
   
}