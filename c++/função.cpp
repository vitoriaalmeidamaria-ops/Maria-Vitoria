#include <iostream>
using namespace std;

    void contagem_regressiva (int valor_inicial){

    cout << "conjtagem iniciada..." << endl;
    for (int i= valor_inicial; i > 0; i--) {
        cout << i << endl;
    }
    cout << "feliz amo novo!!!" << endl;
    }

    int main (){

    // chamar a fun��o (executar a fun��o)
    contagem_regressiva(10);
    contagem_regressiva(365);

    return 0;

    }
