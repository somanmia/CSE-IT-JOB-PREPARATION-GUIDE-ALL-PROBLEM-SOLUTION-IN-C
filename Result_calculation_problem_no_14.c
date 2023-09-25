#include<stdio.h>
int main(){
int n;

while(scanf("%d",&n)!=EOF){
    if(n>=80){
       printf("A+\n");
    }else if(n>=70 && n<80){
        printf("A\n");
    }else if(n>=60 && n<70){
      printf("A-\n");
    }else if(n>=50 && n<60){
      printf("B\n");
    }else if(n>=40 && n<50){
       printf("C\n");
    }else if(n>=33 && n<40){
      printf("D\n");
    }else{
      printf("F\n");
    }

}




return 0;}
