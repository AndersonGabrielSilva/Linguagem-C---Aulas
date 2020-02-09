

int main()
{
    int valorA,valorB;

    valorA = receberValorUsuario(1);
    valorB = receberValorUsuario(2);

    printf ("\n A soma é: %d", modificarvalor(valorA,valorB));

return 0;
}


int modificarvalor (int numero1, int numero2){

    return (numero1 + numero2);
}
int receberValorUsuario (qualvalor){
    int valor;
    printf ("\n Digite o Valor %d: ", qualvalor);
    scanf  ("%d", &valor);
return valor;
}
