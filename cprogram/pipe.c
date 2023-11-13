#include <stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int fd[2]; 
    if(pipe(fd)==-1){
        printf("sorry invalid");
        exit(-1);
    }
    int cp=fork();
    if(cp==-1){
        printf("sorry no children");
        exit(-1);

    }
    if(cp==0){
        char tosend="hi najah";
        write(fd[1],tosend,strlen(tosend));
        printf("data send to parent");
        exit(0);

    }
    else{
        wait(NULL);
        char torecieve[BUFSIZ];
        read(fd[0],torecieve,BUFSIZ);
        printf("datafrom child");
        exit(0);
    }
    return 0;
}
