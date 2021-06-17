#ifndef _PRECISION_H_INCLUDED_
#define _PRECISION_H_INCLUDED_

#include "bignum.h"

#include <queue>
#include <set>
#include <cstring>
#include <stack>
#include <cctype>
//manejo de los streams de entrada y salida, asigna los streams a los bignum
class precision
{
    istream *iss_;			// stream de entrada de donde se obtendran los datos de consulta
    ostream *oss_;			// stream de salida donde se emitiran la ditancia min
    precision();

    //Set(conjunto) de operadores para comparación en shunting y RPNto bignum
    std::set<char> operators_chars;
    char const * CharList = "*/+-";


    bignum *resultado; //de cada línea procesada en el stream
    queue<string> *RPN; //de cada línea procesada en el stream 
    bool RPNtobignum();
    
public:
    
    precision(istream &,ostream &);
    ~precision();
    bool shunting();
};

#endif