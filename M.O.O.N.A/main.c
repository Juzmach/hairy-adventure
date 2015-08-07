#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void sigintHandler(int sig_num)
{
    printf("\n This incident has been reported \n");
    sleep(1);
    fflush(stdout);
    exit(0);
}
void sleep_ms(int micros) 
{
    usleep(micros * 1000);
}
int recurse(int sndLast, int last, int depth)
{
    int dis = sndLast + last;
    if(depth == 1)
    {
        return dis;
    }
    return recurse(last, dis, depth - 1);
}
int getNthFibo(int idx)
{
    return recurse(1,1,idx-2);
}
int main(int argc, char **argv)
{
    // clear screen
    printf("\033[H\033[J");
    if(argc)
    {
        printf(argv[1]);
        printf("nakki: %d", getNthFibo(40));
        printf("got parameter %d\n", argc);
    }

    // add message in case of ctrl+c
    signal(SIGINT, sigintHandler);

    printf("    Initializing M.O.O.N.A access code verification system\n");
    sleep_ms(1000);
    printf("...\n");
    sleep_ms(1000);
    printf("...\n");
    sleep_ms(2500);
    printf("...\n");
    sleep_ms(500);
    printf("...\n");
    sleep_ms(500);
    printf("...\n");
    sleep_ms(500);
    printf("\n");
    sleep_ms(2000);
    printf(" --- WELCOME TO >>MISSILE OPERATED OPPRESSION NEUTRALIZATION ARSENAL<< \n");
    sleep_ms(2000);
    printf("\033[H\033[J");
    printf(" --- WELCOME TO >>MISSILE OPERATED OPPRESSION NEUTRALIZATION ARSENAL<< \n\n\n");
    printf("Before M.O.O.N.A can be used, you must enter /the/ access code\n\n");
    printf("Your supervisors should have provided you with today's access code sheet.\n");
    printf("If not, you might have access to the CODE_GENERATOR_MANUAL and relevant H.A.C.K.E.R training to implement a new access code generator\n\n");
    printf("Enter your access code now. Be aware that entering invalid access codes may have unexpected consequences\n");
    printf("\n");
}
