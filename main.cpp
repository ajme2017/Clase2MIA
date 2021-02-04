#include <QCoreApplication>
#include "iostream"
#include <QString>
#include <parser.h>  // Nuestro parser
#include <scanner.h>  // Nuestro scanner
#include <QTextStream>
using namespace std;
extern int yyparse(); //
//static QList<discosmontados> discosenmemoria;
int p;
extern int linea; // Linea del token
extern int columna; // Columna de los tokens
extern int yylineno;
int main(int argc, char *argv[])
{

    string p="------------------------------Ingrese un comando------------------------------\n";



    QTextStream qtin(stdin);
    QString line;

    while(line!="salir"){    //esto me sirve para seguir leyendo siempre los comandos sin salirme
        cout << p;
        line = qtin.readLine();
        if(line!="salir"){
            if(line.isEmpty()==false){
                YY_BUFFER_STATE buffer = yy_scan_string(line.toUtf8().constData());

                /*Limpiamos los contadores
 ya que son variables globales*/
                linea = 0;
                columna = 0;
                yylineno = 0;

                if(yyparse()==0) // Si nos da un número negativo, signifca error.
                {
                    printf("\n\Comando ejecutado correctamente\n\n");

                }else {

                    printf("\n\nhay errores\n\n");
                }

            }
        }

    }


}


