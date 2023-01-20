#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display_rolls(int dice, int sides);

int main(){
    int num_dice;
    int num_sides;
    printf("How many dice?: ");
    scanf("%d", &num_dice);
    printf("How many sides: ");
    scanf("%d", &num_sides);
    display_rolls(num_dice, num_sides);
    return 0;
}

void display_rolls(int dice, int sides){
    srand(time(NULL));
    int rand_num = rand() % sides + 1;
    int total = rand_num;
    printf(" %d ", rand_num);
    for(int i = 1; i < dice; i = i + 1){
        rand_num = rand() % sides + 1;
        printf("+ %d ", rand_num);
        total = total + rand_num;
    }
    printf("= %d\n", total);
}
