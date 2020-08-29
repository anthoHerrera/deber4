#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv) {
    
    unsigned int virtual_address, page_number, offset;

    if (argc == 2) {

        virtual_address = atoi(argv[1]);
        page_number = virtual_address >> 12;
        offset = (virtual_address >> 0) & (~(~0 << (12 - 0 + 1)));

        printf("La direccion %d contiene:\n", virtual_address);
        printf("número de pagina = %d\n", page_number);
        printf("offset = %d\n", offset);
        
        
    }else {

        fprintf(stderr, "uso: %s [virtual_address]\n", argv[0]);

    }
    return 0;

    
}