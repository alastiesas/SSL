
• Autores de la resolución: Lastiesas Agustin ◦ Usuario github: alastiesas ◦ Legajo: 1631561 ◦ Apellido: Lastiesas ◦ Nombre: Agustin • Número y título del TP:Trabajo #1 — Fases de la Traducción y Errores 
• Transcripción del enunciado: Identificar las fases de traducción y errores.

TP01
Transicribir en readme.md cada comando ejecutado y
Describir en readme.md el resultado u error obtenidos para cada paso.

hello2.c
>gcc -E -o hello2.i hello2.c

-Aparecen todas las declaraciones del #include <stdio.h> y desaparecen los comentarios reemplazados por espacio.

hello3.c
>gcc -E -o hello3.i hello3.c

-Aparecen 6 lineas arriba de la declaracion de printf, en el resto no hay diferencias.

>gcc -S hello3.i

-Al compilar aparece warning en alusion a la funcion prontf y un error en declaración o declaración esperada al final de la entrada

hello4.c
>gcc -E -o hello4.i hello4.c
>gcc -S hello4.i

-Aparece warning en alusion a la funcion prontf 

>gcc -c hello4.s
>gcc -o hello4 hello4.o

-Al generar ejecutable no esta definida prontf, error ld returned 1 exit status

hello5.c
>gcc -E -o hello5.i hello5.c
>gcc -S hello5.i

-Aparece warning en alusion al formato "%d" espera argumento int

>gcc -c hello5.s
>gcc -o hello5 hello5.o

-Al ejecutarlo aparece "La respuesta es 1"

hello6.c
>gcc -E -o hello6.i hello6.c
>gcc -S hello6.i
>gcc -c hello6.s
>gcc -o hello6 hello6.o

-No presenta errores, al ejecutar sale la leyenda "La respuesta es 42"

hello7.c
>gcc -E -o hello7.i hello7.c
>gcc -S hello7.i

-Aparece warning por no haber declarado la funcion printf y una nota que se incluye "<stdio.h>"

>gcc -c hello7.s
>gcc -o hello7 hello7.o

-Al ejecutarlo aparece la leyenda "La respuesta es 42" sin problemas. Funciona por que el gcc compiler incluye la <stdio.h> por default.

