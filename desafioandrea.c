#include <stdio.h>

int main() {
    char estado[] = "Maceio";
    char codigo_da_carta[] = "B01";
    char nome_da_Cidade[] = "Alagoas";
    int populacao = 3000000;
    float area_em_km = 20000000.0;
    float PIB = 500000.0;
    int numero_de_ponto_turistico = 25;

    printf("estado: %s\n", estado);
    printf("codigo da carta: %s\n", codigo_da_carta);
    printf("nome da Cidade: %s\n", nome_da_Cidade);
    printf("populacao: %d\n", populacao);
    printf("area em km: %.2f\n", area_em_km);
    printf("PIB: %.2f\n", PIB);
    printf("numero de ponto turistico: %d\n", numero_de_ponto_turistico);

    return 0;
}