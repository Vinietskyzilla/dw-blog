#include<stdio.h>

int main() {
    FILE* handle = fopen("/Users/david/executable_permission_experiment/blah", "w");
    fputs("yo", handle);
    fclose(handle);
    printf("hi\n");
    return 0;
}
