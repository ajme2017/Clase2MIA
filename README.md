# Clase2MIA
Breve ejemplo de un analizador léxico y sintáctico usando Flex y Bison

-----Link instalacion QT---------

https://ubunlog.com/qt-mas-qtcreator-ubuntu/

---------COMANDOS PARA INSTALAR FLEX Y BISON-------

sudo apt-get install flex

sudo apt-get install bison

--------------------COMANDOS PARA GENERAR EL ANALIZADOR LEXICO Y SINTACTICO-----------

Primero deben irse a la carpeta del proyecto donde tienen el archivo .l y .y de los analizadores,

abren una terminal desde esa ubicacion y utilizan los siguientes comandos para generar los analizadores

---analizador lexico------

flex --header-file=scanner.h -o scanner.cpp lexico.l

------analizador sintactico ------------

bison -o parser.cpp --defines=parser.h parser.y
