// MathLibrary.cpp : Define las funciones de la biblioteca estática.
//

#include "framework.h"

// TODO: Ejemplo de una función de biblioteca
// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "MathLibrary.h"

namespace MathLibrary
{
    double Arithmetic::Square(double a)
    {
        return a * a;
    }

    double Arithmetic::Cube(double a)
    {
        return a * a * a;
    }