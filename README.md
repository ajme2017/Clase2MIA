# Clase2MIA
Breve ejemplo de un analizador léxico y sintáctico usando Flex y Bison

-----Link instalacion QT---------

https://ubunlog.com/qt-mas-qtcreator-ubuntu/

---------Comandos para instalar FLex y Bison-------

sudo apt-get install flex

sudo apt-get install bison

--------------------Comandos para generar el analizador léxico y sintáctico-----------

Primero deben irse a la carpeta del proyecto donde tienen el archivo .l y .y de los analizadores,

abren una terminal desde esa ubicacion y utilizan los siguientes comandos para generar los analizadores

---Analizador léxico------

flex --header-file=scanner.h -o scanner.cpp lexico.l

------Analizador sintáctico ------------

bison -o parser.cpp --defines=parser.h parser.y
