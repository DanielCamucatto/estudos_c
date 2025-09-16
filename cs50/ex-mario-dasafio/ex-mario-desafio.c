// Vamos recriar essas pirâmides em C, ainda que em texto, usando hashes ( # ) para tijolos, como a seguir. Cada hash é um pouco mais alto do que largo, então as pirâmides em si também são mais altas do que largas.

//       #  #
//     ##  ##
//   ###  ###
// ####  ####



// Implementação

// O programa que escreveremos se chamará mario. E vamos permitir que o usuário decida a altura das pirâmides, primeiro solicitando um número inteiro positivo entre, digamos, 1 e 8, inclusive.

// Veja como o programa pode funcionar se o usuário inserir 8 quando solicitado:

// $ ./mario
// Altura: 8
//                   #  #
//                ##  ##
//              ###  ###
//           ####  ####
//        #####  #####
//      ######  ######
//   #######  #######
// ########  ########

//  Veja como o programa pode funcionar se o usuário inserir 4 quando solicitado:

// $ ./mario
// Altura: 4
//          #  #
//       ##  ##
//    ###  ###
// ####  ####

// Veja como o programa pode funcionar se o usuário inserir 2 quando solicitado:

// $ ./mario
// Altura: 8
//    #  #
// ##  ##

// Veja como o programa pode funcionar se o usuário inserir 1 quando solicitado:

// $ ./mario
// Altura: 8
// #  #

// Se o usuário não inserir, de fato, um número inteiro positivo entre 1 e 8, inclusive, quando solicitado, o programa deve solicitar novamente ao usuário até que ele escreva o valor correto:

// $ ./mario
// Altura: -1
// Altura: 0
// Altura: 32
// Altura: 10
// Altura: 4
//         #  #
//      ##  ##
//   ###  ###
// ####  ####

// Observe que a largura da “lacuna” entre as pirâmides adjacentes é igual à largura de dois hashes, independentemente da altura das pirâmides. Crie um novo diretório chamado mario-desafio dentro do seu diretório pset1 , executando:

// mkdir pset1/mario-desafio
// cd pset1/mario-desafio

// Crie um novo arquivo chamado mario.c dentro do seu diretório mario-desafio. Modifique mario.c de forma que implemente este programa conforme descrito!

// Como testar seu código no IDE do CS50?

// Seu código funciona conforme prescrito quando você insere:





// -1 (ou outros números negativos)?



// 0 ?



// 1 a 8 ?



// 9 ou outros números positivos?



// letras ou palavras?



// nenhuma entrada, quando você apenas pressiona Enter?



// Execute o seguinte para avaliar se seu código está correto usando check50.

// check50 cs50/problems/2024/x/mario/more

// Execute o seguinte para avaliar o style do seu código usando style50.

// style50 mario.c

#include <cs50.h>
#include <stdio.h>

int main(void){
    int num;
    do{
        num = get_int("Digite um número entre 1 e 8: ");
    }
    while(num < 1 || num > 8);

    
}