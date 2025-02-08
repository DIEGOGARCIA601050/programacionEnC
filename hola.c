#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void handle_sigterm(int sig)
{
    printf("Programa terminado con la señal %d\n", sig);
    exit(1);
}

int main()
{
    int edad=28;
    signal(SIGTERM, handle_sigterm);
    printf("Hola, tengo %d", edad);
    printf(" años\n");
    return 0;
}
