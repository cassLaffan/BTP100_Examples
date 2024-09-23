#include <stdio.h>

int main(){
    int inp = 0;

    while(inp != -1){
        printf("Please enter a number, -1 to exit.\n");
        scanf("%d", &inp);

        if(inp == 4){
            printf("Your input was 4!\n");
        }
        else if(inp == -10){
            printf("Your input was -10!\n");
        }
        else{
            printf("You entered some number!\n");
        }
        int count = 0;
        do{
            printf("Printing a number %d\n", count);
            count++;
        }while(count <= 10);

        // Look up getchar() if you wanna clean up the buffer
    }

    return 0;
}