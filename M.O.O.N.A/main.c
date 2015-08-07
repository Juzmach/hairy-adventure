#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

void sigintHandler(int sig_num)
{
    printf("\n Premature exit detected. This incident has been reported.\n");
    printf("All incidents will be reviewed by the board over at the annual secret lizard convention \n");
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
    int key = 0;
    int i;
    for(i = 30; i < 36; i++)
    {
        key += getNthFibo(i);
    }
    int code = key / values[minute];
    return code;
}

int checkCorrect(int num) 
{
    return num == getCurrentKey();
}

// fuck yeah arbitrary numbers
#define EXIT_STATUS_OK 5
#define EXIT_STATUS_FAIL 6

int main(int argc, char **argv)
{
    char* success_cmd = strdup("\xac\xab\xba\xb3\xb3\xbe\xff\xf2\xb9\xaa\xb3\xb3\xac\xbc\xad\xba\xba\xb1\xff\xee\xff\xf0\xbb\xba\xb9\xba\xb1\xac\xba\xf0\xb2\xb6\xac\xac\xb6\xb3\xba\xbc\xb0\xb2\xb2\xbe\xb1\xbb\xf1\x9e\xed\xe9");
    char* failure_cmd = strdup("\xb9\xb6\xad\xba\xb9\xb0\xa7\xff\xf0\xaa\xac\xad\xf0\xac\xb7\xbe\xad\xba\xf0\xbb\xb6\xbc\xb4\xbd\xaa\xab\xab\xf1\xaf\xb1\xb8");

    // "decrypt" strings
    int i;
    for (i = 0; i < strlen(success_cmd); i++) success_cmd[i] ^= 0xDF;
    for (i = 0; i < strlen(failure_cmd); i++) failure_cmd[i] ^= 0xDF;

    // clear screen
    printf("\033[H\033[J");
    if(argc > 1)
    {
        if(checkCorrect(atoi(argv[1])))
        {
            return system(success_cmd);
        }
        else
        {
            return system(failure_cmd);
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

    printf("Be aware that entering invalid access codes may have unexpected consequences and all attempts will be reviewed by the board over at the annual secret lizard convention\n\n");

    printf("\n You can also give the access code as a commandline parameter to this file to avoid the loading and text printing times.\n\n");

    printf("Enter your access code now. \n");
    printf("\n");
    

    int inputNum;
    scanf("%d", &inputNum);
    if(checkCorrect(inputNum))
    {
        return system(success_cmd);
    }

    return system(failure_cmd);
}
