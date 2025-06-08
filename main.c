#include <stdio.h>

// Fun��o que retorna o maior entre dois n�meros
int Maior(int a, int b) {
    return (a > b) ? a : b;
}

// Fun��o que calcula a m�dia das notas positivas
float Media(float n1, float n2, float n3) {
    float soma = 0;
    int count = 0;

    if (n1 >= 0) { soma += n1; count++; }
    if (n2 >= 0) { soma += n2; count++; }
    if (n3 >= 0) { soma += n3; count++; }

    return (count > 0) ? (soma / count) : 0;
}

int main() {
    float nota1, nota2, nota3;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    float media3 = Media(nota1, nota2, nota3);

    float maior, meio;

    if (nota1 <= nota2 && nota1 <= nota3) {
        meio = Maior(nota2, nota3);
        maior = (nota2 + nota3) - meio;
    } else if (nota2 <= nota1 && nota2 <= nota3) {
        meio = Maior(nota1, nota3);
        maior = (nota1 + nota3) - meio;
    } else {
        meio = Maior(nota1, nota2);
        maior = (nota1 + nota2) - meio;
    }

    float media2 = Media(meio, maior, -1);

    printf("Media com as 3 notas: %.2f\n", media3);
    printf("Media com as 2 maiores notas: %.2f\n", media2);

    return 0;
}
