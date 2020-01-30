#include <stdlib.h>

int main()
{
    system("git clone https://github.com/jh-dickson/Replicate.git");
    system("cp Replicate/download.c download_out.c");
    system("rm -rf Replicate");
}
