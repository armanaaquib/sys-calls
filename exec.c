#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
  // execl("/bin/ls", "ls", "-l", (char *)NULL);
  // execlp("ls", "ls", "-l", (char *)NULL);

  // char *args[] = {"ls", "-lG", NULL};
  // execv("/bin/ls", args);
  // execvp("ls", args);

  int num;
  printf("Enter Number\n");
  scanf("%d", &num);

  execlp("cat", "cat", (char *)NULL);

  return 0;
}
