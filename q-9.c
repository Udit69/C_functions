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

    int x=0;
    

    do{
        printf("\n\n 1. for addition\n 2. for subtraction\n 3. for multiplication\n 4. for division\n 5. for remainder\n 6. for exit\n\n\n");

        printf("ENTER YOUR CHOICE:= ");
        scanf("%d",&x);

        if (x==1){
            int a;
            printf("ENTER FIRST DIGIT:= ");
            scanf("%d",&a);
            
            int b;
            printf("ENTER SENCOND DIGIT:= ");
            scanf("%d",&b);
            
            int c = addi(a,b);
            printf("THE SUM OF THESE NUMBERS ARE %d\n\n",c);
        }

        else if(x==2){
            int a;
            printf("ENTER FIRST DIGIT:= ");
            scanf("%d",&a);
            
            int b;
            printf("ENTER SENCOND DIGIT:= ");
            scanf("%d",&b);
            
            int c = subtra(a,b);
            printf("THE Sub OF THESE NUMBERS ARE %d\n\n",c);
        }

        else if(x==3){
            int a;
            printf("ENTER FIRST DIGIT:= ");
            scanf("%d",&a);
            
            int b;
            printf("ENTER SENCOND DIGIT:= ");
            scanf("%d",&b);
            
            int c = multi(a,b);
            printf("THE multiply OF THESE NUMBERS ARE %d\n\n",c);
            }

            else if(x==4){
            int a;
            printf("ENTER FIRST DIGIT:= ");
            scanf("%d",&a);
            
            int b;
            printf("ENTER SENCOND DIGIT:= ");
            scanf("%d",&b);
            
            int c = divi(a,b);
            printf("THE DIVISION OF THESE NUMBERS ARE %d\n\n",c);
            }

            else if(x==5){
            int a;
            printf("ENTER FIRST DIGIT:= ");
            scanf("%d",&a);
            
            int b;
            printf("ENTER SENCOND DIGIT:= ");
            scanf("%d",&b);
            
            int c = rem(a,b);
            printf("THE REMAINDER OF THESE NUMBERS ARE %d\n\n",c);
            }
        


    }while(x!=6);
        



}
