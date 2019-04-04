
float sumas (float x, float y)
{
    float resultado;
    resultado = x+y;
    return resultado;
}

float restas(float x, float y)
{
    float resultado;
    resultado = x-y;
    return resultado;
}

float multiplicaciones(float x, float y)
{
    float resultado;
    resultado = x*y;
    return resultado;
}

float divisiones(float x, float y)
{
    float resultado;
    resultado = x/y;
    return resultado;
}

int factoriales(float x)
{
    int i;
    int resultado = 1;
    for ( i = 1; i <= x; i++)
    {
        resultado = resultado*i;
    }

    return resultado;
}
