#include <cs50.h>
#include <stdio.h>

// Em um arquivo chamado mario.c, vamos implementar um programa em C que recrie essa pirâmide usando hashes ( # ) para os tijolos, como no exemplo a seguir:

//               #
//             ##
//           ###
//         ####
//       #####
//     ######
//  #######
// ########

int main(void){

    int num;
    
    do
    {
        num = get_int("Digite um número entre 1 e 8: ");
    }
    while (num < 1 || num > 8);

    for(int y = 0; y < num; y++)
    {

        for(int x = 0; x < num - y - 1; x++)
        {
            printf(" ");
        }

        for(int i = 0; i <= y; i++){
            printf("#");
        }
        printf("\n");
    }
    
}