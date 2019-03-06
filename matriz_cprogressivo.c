#include <stdio.h>
#define DIM 6
// Curso C Progressivo: www.cprogessivo.net
// O melhor curso de C! Online e gratuito!
// Artigos, apostilas, tutoriais e // vídeo-aulas sobre a linguagem de programação C!

int main()
{
    int matriz[DIM][DIM];
    int linha, coluna;

    //escrevendo na Matriz
    for(linha = 0 ; linha < DIM ; linha++)
        for(coluna = 0 ; coluna < DIM ; coluna++)
        {
            printf("Elemento [%d][%d]: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }

    // imprimindo a matriz na tela
    for(linha = 0 ; linha < DIM ; linha++)
    {
        for(coluna = 0 ; coluna < DIM ; coluna++)
            printf("%3d", matriz[linha][coluna]);

        printf("\n"); //após cada linha ser impressa, um salto de linha
    }
}

