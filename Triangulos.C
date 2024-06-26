#include <stdio.h> 

int main()
{
    int A, B, C;

    printf("Digita essa porra desse primeiro lado ai:");
    scanf("%d", &A);

    printf("Digita essa porra desse segundo lado ai:");
    scanf("%d", &B);

    printf("Digita essa porra desse terceiro lado ai:");
    scanf("%d", &C);

    if(A < (B + C) && B < (A + C) && C < (A + B))
    {
        printf("esta porra forma um triangulo  ");

        if(A == B && B == C)
        {
            printf("E o triangulo e equilatero");
        }
        else
        {
            if(A == B | B == C | A == C)
            {
                printf("E o triangulo e isoceles");
            }

            else
            {
                printf("E o triangulo e escaleno");
            }
        }
        
    }

    else 
    {
        printf("nao forma triangulo burro");
    }
} 
