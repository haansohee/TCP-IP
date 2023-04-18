// #include <stdio.h>
// #include <fcntl.h>
// #include <unistd.h>
// #include <sys/socket.h>

// int main(void) {
//     int fd1, fd2, fd3;
//     fd1 = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP); // socket 함수는 리소스를 만듦
//     fd2 = open("test.dat", O_CREAT|O_WRONLY|O_TRUNC); // 이 줄을 지우면 정상적으로 계속 3 4 5 나옴
//     fd3 = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);
//     // IPPROTO_TCP, IPPROTO_UDP 이 자리에 0 넣어도 ㅇㅋ
    
//     printf("file descripter 1: %d \n", fd1);
//     printf("file descripter 2: %d \n", fd2);
//     printf("file descripter 3: %d \n", fd3);
    
//     close(fd1);
//     close(fd2);
//     close(fd3);
    
//     return 0;
// }

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>

int main(void)
{
        int fd1, fd2, fd3;
        fd1=socket(PF_INET, SOCK_STREAM, 0);
        fd2=open("test.dat", O_CREAT|O_WRONLY|O_TRUNC);
        fd3=socket(PF_INET, SOCK_DGRAM, 0);

        printf("file descriptor 1: %d\n", fd1);
        printf("file descriptor 2: %d\n", fd2);
        printf("file descriptor 3: %d\n", fd3);

        close(fd1); close(fd2); close(fd3);
        return 0;
}