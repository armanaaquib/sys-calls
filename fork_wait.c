#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
  int pid = fork();
  int a = 10;
  int *b = &a;
  int *m = malloc(sizeof(int));
  *m = 10;

  if (pid == 0)
  {
    printf("Child Process: %d\n", pid);

    // a += 2;
    // printf("a in child %d\n", a);

    // printf("%p %p\n", &a, b);
    // // *b += 2;
    // // printf("a in child after *b %d\n", a);

    // printf("m in child %p\n", m);
    // *m += 1;
    // printf("*m in child %d\n", *m);

    scanf("%d", &a);
  }
  else
  {

    printf("Parent Process: %d\n", pid);

    // a += 5;
    // printf("a in parent %d\n", a);

    // printf("%p %p\n", &a, b);
    // // *b += 2;
    // // printf("a in parent after *b %d\n", a);

    // printf("m in parent %p\n", m);
    // *m += 2;
    // printf("*m in parent %d\n", *m);

    printf("Waiting....\n");
    wait(&pid);
    printf("finished.....\n");
  }

  return 0;
}
