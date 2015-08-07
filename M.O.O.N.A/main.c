#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

void sigintHandler(int sig_num)
{
    printf("\n Premature exit detected. This incident has been reported \n");
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
    60,
    59,
    58,
    57,
    56,
    55,
    54,
    53,
    52,
    51,
    50,
    49,
    48,
    47,
    46,
    45,
    44,
    43,
    42,
    41,
    40,
    39,
    38,
    37,
    36,
    35,
    34,
    33,
    32,
    31,
    30,
    29,
    28,
    27,
    26,
    25,
    24,
    23,
    22,
    21,
    20,
    19,
    18,
    17,
    16,
    15,
    14,
    13,
    12,
    11,
    10,
    9,
    8,
    7,
    6,
    5,
    4,
    3,
    2,
    1
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
    printf("If not, you might have access to the CODE_GENERATOR_MANUAL and relevant H.A.C.K.E.R training to implement a new access code generator\n\n");
    printf("Enter your access code now. Be aware that entering invalid access codes may have unexpected consequences\n");
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
