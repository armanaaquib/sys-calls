#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void print_and_ignore(int signal)
{
  printf("Ignoring signal %d\n", signal);
}

int main(void)
{
  signal(SIGINT, print_and_ignore);
  signal(SIGQUIT, SIG_IGN);
  // signal(SIGKILL, SIG_IGN);
  int i = 0;
  while (1)
  {
    printf("%d\n", i++);
    sleep(1);
  }

  return 0;
}
