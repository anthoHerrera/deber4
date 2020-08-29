# Assigment4
Programa en C de nombre assigment4.c al que se le pasa una dirección virtual (en decimal) en la línea de comando y muestra el número de página y el desplazamiento para la dirección dada. Suponga un sistema de gestión de memoria que tiene direcciones virtuales de 32 bits con un tamaño de página de 4 KB.

Tamaño de pagina = 2^2 * 2^10 B = 2^12

2^32 - 2^12 = 2^20

## Uso
Ejecutar el archivo make
```bash
$ make
```

```bash
$ ./assigment4 [virtual_address]
```
#### Ejemplos

```bash
$ ./assigment4 19986
```

```bash
$ ./assigment4 25602
```

```bash
$ ./assigment4 35888
```


