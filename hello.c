#include <stdio.h>
#include "command.h"
#include "buffer.h"
#include "defs.h"
#include "a/iic.h"
#include <unistd.h>
#include <sys/param.h>
#include <rpc/types.h>
#include <getopt.h>
#include <strings.h>
#include <time.h>
#include <signal.h>

int num=0;


int main(void)
{

    int i;
    int pid;
    for(i=0;i<3;i++)
    {
        pid=fork();
        if(pid <= (pid_t) 0)
        {
            /* child process or error*/
            sleep(1); /* make childs faster */
            break;
        }
    }

    if(pid == (pid_t) 0)
    {
        while(1)
	{
	  num++;
	  printf("ch num = %d\n",num);
sleep(2);
	}

    }
    else
    {
        while(1)
	{
	  num++;
	  printf("zzhu num = %d\n",num);
sleep(1);
	}
    }
	
	return 0;
}
