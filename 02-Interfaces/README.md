# SSL
**Curso:** K2051 2018<br />
**Integrantes:**<br />
* Bieniasz Ezequiel<br />
* Godirio Martin Gabriel<br />
* González Yebra Emanuel<br />
* Lastiesas Agustin<br />
* Siksnys Nadia<br />

## Uso
### Compilación y ejecución
```
$ make run                    
./TablasDeConversion
Fahrenheit a Celsius
  0 C° = -17.8 F°
 20 C° =  -6.7 F°
 40 C° =   4.4 F°
 60 C° =  15.6 F°
 80 C° =  26.7 F°
100 C° =  37.8 F°
120 C° =  48.9 F°
140 C° =  60.0 F°
160 C° =  71.1 F°
180 C° =  82.2 F°
200 C° =  93.3 F°
220 C° = 104.4 F°
240 C° = 115.6 F°
260 C° = 126.7 F°
280 C° = 137.8 F°
300 C° = 148.9 F°


Celsius a Fahrenheit
  0 F° =  32.0 C°
 20 F° =  68.0 C°
 40 F° = 104.0 C°
 60 F° = 140.0 C°
 80 F° = 176.0 C°
100 F° = 212.0 C°
120 F° = 248.0 C°
140 F° = 284.0 C°
160 F° = 320.0 C°
180 F° = 356.0 C°
200 F° = 392.0 C°
220 F° = 428.0 C°
240 F° = 464.0 C°
260 F° = 500.0 C°
280 F° = 536.0 C°
300 F° = 572.0 C°

```

### Tests
```
$ make test
cc -std=c11 -Wall -Wmissing-prototypes   -c -o Conversion.o Conversion.c
cc -std=c11 -Wall -Wmissing-prototypes    ConversionTest.c Conversion.o   -o ConversionTest
./ConversionTest
```

### Limpieza
```
$ ls -1
Conversion.c
Conversion.h
Conversion.o
ConversionTest
ConversionTest.c
Makefile
README.md
TablasDeConversion
TablasDeConversion.c

$ make clean
rm -f Conversion.o TablasDeConversion ConversionTest

$ ls -1
Conversion.c
Conversion.h
ConversionTest.c
Makefile
README.md
TablasDeConversion.c
```
