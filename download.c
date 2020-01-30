#include <stdlib.h>

int main()
{
    system("git clone https://github.com/jh-dickson/Replicate.git");
    system("cp Replicate/download.c download.c");
    system("rm -r Replicate");
}