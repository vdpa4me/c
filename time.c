#include <stdio.h>
#include <time.h> //for clock_t
#include <unistd.h>  //for sleep()

int main(int argc, char* argv[])
{
    time_t initial;

    initial = time(NULL);


    for(int i=0; i<20; i++)
    {
        sleep(10);
        time_t current = time(NULL); 
        printf("initial:%ld, current:%ld, %ld seccodns elapsed \n", initial, current, (current - initial));
    }


    time_t end = clock();
    //printf("Totally %.1f second elapsed \n", (float)(end - initial));


}