#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    // this gives us the number of lines to be printed
    for (int i = 1; i <= rows; i++) {
        // this gives us the number of stars to be printed in a line
        for (int j = 1; j <= i; j++){
            printf("*"); 
            printf(" "); // give space between stars 
        }
        printf("\n"); // push the stars to new line 
    }
    return 0;
}
