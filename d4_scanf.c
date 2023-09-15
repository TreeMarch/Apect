#include <stdio.h>

int d4_scanf(){
//    int main(){
    int a;
    float d =123.4545;
    printf("float 123.4545 : %e",d);
    char fullName[100];
    gets(fullName);
    printf("fullName : %s \n",fullName);
    char ch , name[40];
    printf("please enter the data : \n");
    scanf("%d %f %c %s",&a,&d,&ch,name);
    printf("\n the value accepted are : %d,%f ,%c ,%s",a,d,ch,name);
    return 0;


//    }
}