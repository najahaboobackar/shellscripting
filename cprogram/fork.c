#include <stdio.h>
#include <unistd.h>

int main() {
    int n;
    printf("enter the limit: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (fork() == 0) {
            printf("%d child process, parent %d\n", getpid(), getppid());
            // The child process should exit to avoid printing the parent's message.
            // Without this, both the parent and the child would continue executing the loop.
            _exit(0);
        } else {
            printf("%d parent process\n", getpid());
        }
    }

    return 0;
}
