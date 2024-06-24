//860. Lemonade Change

#include <stdio.h>
#include <stdlib.h>

int main() {
    int bills[5], c = 0, total = 0, flag = 0;

   
    for (int i = 0; i < 5; i++) {
        printf("Valor recebido: ");
        scanf("%d", &bills[i]);
    }

    while (c < 5) {
        if (bills[c] == 5) {
            total += 5;
        } else if (bills[c] == 10) {
            if (total >= 5) {
                total -= 5; 
            } else {
                printf("\nFalse.");
                flag = 1;
                break;
            }
        } else if (bills[c] == 20) {
            if (total >= 15) {
                total -= 15;
            } else if (total >= 10) {
                total -= 10; 
            } else {
                printf("\nFalse.");
                flag = 1;
                break;
            }
        }

        c++;
    }

    if (flag == 0) {
        printf("\nTrue.");
    }

    return 0;
}










