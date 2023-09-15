#include <stdio.h>
int sizeOf(){
//int main(){
    float r,c,s;
    printf("Ban kinh cua hinh tron la r = ");
    scanf("%f", &r);
    c= 6.28*r;
    s= 3.14*r*r;
    printf("\n");
    printf("ket qua tinh chu vi va dien tich hinh tron la : \n");
    printf("====================*************====================== \n");
    printf("ban kinh hinh tron:     r=%8.1f met \n ",r);
    printf("Dien tich hinh tron:     r=%8.2f met \n ",c);
    printf("Chu vi hinh tron:     r=%8.2f met vuong \n ",s);
    printf("============================================\n\n");
//    =================== vi du so hai =============================
    printf("Data type     \t | Size of byte \n");
    printf("int             \t| %d byte \n",sizeof (int));
    printf("float            \t| %d byte \n",sizeof (float ));
    printf("unsigned int       \t| %d    byte \n",sizeof (unsigned int));
    printf("short int            \t| %d byte \n",sizeof (short int));
    printf("long int            \t| %d byte \n",sizeof (long int));
    printf("double            \t| %d byte \n",sizeof (double ));

    return 1;

//}
}