#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv) {
    
    unsigned long int virtual_address, page_number, offset;

    if (argc == 2) {

        virtual_address = atoi(argv[1]);
        page_number = virtual_address >> 12;
        offset = (virtual_address >> 0) & (~(~0 << (12 - 0 + 1)));

        printf("La direccion %ld contiene:\n", virtual_address);
        printf("número de pagina = %ld\n", page_number);
        printf("offset = %ld\n", offset);
        
        
    }else {

        fprintf(stderr, "uso: %s [virtual_address]\n", argv[0]);

    }
    return 0;

    
}