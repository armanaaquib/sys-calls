#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
  int pid = fork();

  if (pid == 0)
  {
    printf("Child Proces\n");
    // sleep(30);
    exit(0);
  }
  else
  {
    sleep(30);
    printf("Parent Process\n");
  }

  return 0;
}
