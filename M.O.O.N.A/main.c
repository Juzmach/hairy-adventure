#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

void sigintHandler(int sig_num)
{
    printf("\n Premature exit detected. This incident has been reported.\n");
    printf("Incidents will be reviewed by the board over at the annual secret lizard convention \n");
    sleep(2);
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

int values[60] = {
    88,
    420,
    1024,
    5,
    2,
    3,
    266,
    6,
    7,
    4,
    8,
    36,
    30,
    2015,
    666,
    256,
    2048,
    882015,
    687,
    543267,
    432,
    64,
    654,
    6543,
    5684,
    654,
    65,
    643,
    788,
    563,
    314,
    815,
    1941,
    59,
    95,
    46,
    35,
    76,
    35432,
    642,
    87,
    543,
    25,
    26,
    58,
    46,
    436,
    26,
    45,
    75,
    8765,
    754,
    534,
    34,
    911,
    112,
    768,
    23,
    678,
    90
};
int getCurrentKey()
{
    time_t rawtime;
    time(&rawtime);
    struct tm* tm_struct = localtime(&rawtime);
    int minute  = tm_struct->tm_min;
    printf("current minute: %d\n", minute);
    int key = 0;
    for(int i = 30; i < 36; i++)
    {
        key += getNthFibo(i);
    }
    printf("\nkey %d\n", key);
    int code = key / values[minute];
    printf("\ncode %d\n", code);
    return code;
}

int checkCorrect(int num) 
{
    printf("check correct parameter %d\n", num);
    return num == getCurrentKey();
}

int handleErroneousCode()
{
    //open dickbutt
    printf("\nreturning %d from program\n", 1);
    return 1;
}

int handleCorrectCode()
{
    //open missile launcher or whatever
    printf("\nreturning %d from program\n", 0);
    return 0;
}

int main(int argc, char **argv)
{
    // clear screen
    printf("\033[H\033[J");
    if(argc > 1)
    {
        printf(argv[1]);
        printf("\nnakki: %d \n", getNthFibo(40));
        printf("got parameter %d\n", argc);
        if(checkCorrect(atoi(argv[1])))
        {
            return handleCorrectCode();
        }
        else
        {
            return handleErroneousCode();
        }
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
    printf("If not, and you happen to have both the relevant H.A.C.K.E.R training and a CODE_GENERATOR_MANUAL, you can implement a new access code generator using a per minute key-value list and the system from the CODE_GENERATOR_MANUAL\n\n");

    printf("Be aware that entering invalid access codes may have unexpected consequences and the attempt will be reviewed by the board over at the annual secret lizard convention\n\n");
    printf("Enter your access code now. \n");
    printf("\n");
    

    int inputNum;
    scanf("%d", &inputNum);
    if(checkCorrect(inputNum))
    {
        return handleCorrectCode();
    }
    else
    {
        return handleErroneousCode();
    }
}
