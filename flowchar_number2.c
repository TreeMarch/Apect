#include <stdio.h>
int odd_main(){
//int main() {
    int num, r;
    printf("Nhap so :");
    scanf("%d", &num);
    r = num % 2;
    if (r == 0) {
        printf("number is even %d ", num);
    } else {
        printf("number is odd %d", num);
    }
//}

}