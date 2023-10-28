#include <cs50.h>
#include <stdio.h>



long get_num(void);
int get_code_card(long int num_card);

int main(void)
{

    int k = 0;

    long int card = get_num();

    int v = 0;

    int id = 0;


    for (int x = 1; x < 17; x ++){
        v = card % 10;
        card = card / 10;


        if (x % 2 == 0){
            if ((v* 2) > 10){
                v = v * 2;
                k = k + (v % 10);

                k = k + (v / 10);

            }
            else{
                k = k + v * 2;

            }
        }
        if (x % 2 == 1){

            k = k + v;
        }

        if (x == 14){
            id = card;
        }
    }

    if ((id == 34 || id == 37) && k % 10 == 0){
        printf("AMEX CARD\n");
    }
    else if ((id >= 51 && id <= 55) && k % 10 == 0){
        printf("MASTER CARD\n");
    }
    else if((id / 10 == 4 || id == 4) && k % 10 == 0){
        printf("VISA CARD\n");
    }
    else{
        printf("INVALID\n");
    }

    printf("%d [output]\n", k);

    return 0;
}

long get_num(void){
    long int n = get_long("Number:");

    while(n < 0){
         n = get_long("Number:");
    }

    return n;
}

 int get_code_card(long int num_card){
    for (int x = 1; x < 17; x ++){
        v = num_card % 10;
        num_card = num_card / 10;


        if (x % 2 == 0){
            if ((v* 2) > 10){
                v = v * 2;
                k = k + (v % 10);

                k = k + (v / 10);

            }
            else{
                k = k + v * 2;

            }
        }
        if (x % 2 == 1){

            k = k + v;
        }

        if (x == 14){
            id = num_card;
        }
    }
    return k;
 }