// Crie uma struct para representar um Ponto no espaço 2D (float x, y).
// Crie também a função distancia(...) que tem como parâmetro um vetor 
// de Pontos (que vai receber 2 pontos). A função deve retornar a distância euclidiana 
// entre os 2 pontos recebidos. A função main já é dada pelo Moodle no caso de teste.
// Você deve criar a struct e a função distancia(...) somente.

#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float calc_dist(struct Ponto *pontos);

float calc_dist(struct Ponto pontos[]){
    return sqrt(pow((pontos[0].x - pontos[1].x), 2) + pow((pontos[0].y - pontos[1].y), 2));
}