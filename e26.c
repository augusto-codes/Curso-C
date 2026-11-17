#include <stdio.h>

int contador(int contar, char palavra[20]){
    char letra;
    int n = 1, contador = 0;
    while (letra != 0)
    {
        for (int i = 0; i < n; i++)
        {
            letra = palavra[i];
            contador = contador + 1;
            if (letra != 0)
            {
                n = n + 1;
            }
            
        }
        
    }
    
}

int main(){




    return 0;
}