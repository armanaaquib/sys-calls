#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  while (1)
  {
    char message[255];
    printf("my-shell $ ");
    gets(message);
    if (strcmp(message, "exit") == 0)
    {
      exit(0);
    }

    int pid = fork();

    if (pid == 0)
    {
      execl("/bin/echo", "echo", message, (char *)NULL);
    }
    else
    {
      wait(&pid);
    }
  }

  return 0;
}
