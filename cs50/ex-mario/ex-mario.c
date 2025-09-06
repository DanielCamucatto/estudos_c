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

    int num = get_int("Digite um número: "); 
    printf("Você digitou %i\n", num);
}