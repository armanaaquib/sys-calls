#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid;
  pid = fork();
  printf("pid = %d\n", pid);

  if (pid == 0)
  {
    printf("Child Process sleeps\n");
    // int num;
    // scanf("%d", &num);
    sleep(60);
  }
  else
  {
    printf("Patrent Process\n");
  }

  return 0;
}
