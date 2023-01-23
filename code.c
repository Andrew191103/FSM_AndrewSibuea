#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylib.h"

void machine_closed() {
    printf(" _________________\n");
    printf("|        |        |\n");
    printf("|  open  |   __   |\n");
    printf("|        |  |><|  |\n");
    printf("|  close |  |><|  |\n");
    printf("|        |   --   |\n");
    printf("|        |        |\n");
    printf("|________|________|\n");
    printf("  Machine Closed\n");
}

void machine_opened() {
    printf(" _________________\n");
    printf("|        |        |\n");
    printf("|  open  |   __   |\n");
    printf("|        |  |  |  |\n");
    printf("|  close |  |  |  |\n");
    printf("|        |   --   |\n");
    printf("|        |        |\n");
    printf("|________|________|\n");
    printf("  Machine Opened\n");
}

void machine_insert() {
    printf(" _________________\n");
    printf("|        |        |\n");
    printf("|  open  |   __   |\n");
    printf("|        |  |<-|-||\n");
    printf("|  close |  |<-|-||\n");
    printf("|        |   --   |\n");
    printf("|        |        |\n");
    printf("|________|________|\n");
    printf("  Machine Insert\n");
}

void machine_accepts() {
    printf(" _________________\n");
    printf("|        |        |\n");
    printf("|  open  |   __   |\n");
    printf("|        |  |><|  |\n");
    printf("|  close |  |><|  |\n");
    printf("|        |   --   |\n");
    printf("|        |        |\n");
    printf("|________|________|\n");
    printf("  Machine Accepts\n");
}

void machine_rejects() {
    printf(" _________________\n");
    printf("|        |        |\n");
    printf("|  open  |   __   |\n");
    printf("|        |  |<X|  |\n");
    printf("|  close |  |<X|  |\n");
    printf("|        |   --   |\n");
    printf("|        |        |\n");
    printf("|________|________|\n");
    printf("  Machine Rejects\n");
}

int main(void) {
    int door = 0, accept = 0;
    char repeat;
    srand(time(0));
    do {
        printf("\033[2J");
        printf("\033[1;1H");
        printf("Enter button input (0 if you don't want to open the recycling vending machine's door, 1 if you want to open it): ");
        scanf("%d", &door);
        if (door == 1) {
            machine_opened();
            printf("Enter button input (0 if you don't want to insert an item, 1 if you want to insert it): ");
            scanf("%d", &door);
            if (door == 1) {
                machine_insert();
                accept = rand() % 2;
                if (accept == 1) {
                    machine_accepts();
                } else {
                    machine_rejects();
                }
            }
        } else {
            machine_closed();
        }
        printf("Do you want to repeat the program with new inputs? (y/n) ");
        scanf(" %c", &repeat);
    } while (repeat == 'y');
    printf("Exiting program...\n");
    return 0;
}

