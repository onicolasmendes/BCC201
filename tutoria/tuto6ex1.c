#include <stdio.h>

int main(){

    //Declaração de variáveis
    int horaInicio, minutoInicio, horaFinal, minutoFinal, minutosInicio, minutosFinal, tempo, parada = 1;

    while(parada == 1)
    {
        //Entrada
        scanf("%d %d %d %d", &horaInicio, &minutoInicio, &horaFinal, &minutoFinal);

        //Converter horas em minutos
        minutosInicio = (horaInicio * 60) + minutoInicio;

        minutosFinal = (horaFinal * 60) + minutoFinal;

        tempo = minutosFinal - minutosInicio;

        if(tempo <= 0)
        {
            tempo = tempo + 1440;
        }
        
        //Ṕarada
        if(horaInicio == 0 && minutoInicio == 0 && horaFinal == 0 && minutoFinal == 0)
        {
            return 0;
        }

        //Saída
        printf("%d\n", tempo);

    }



    return 0;
}