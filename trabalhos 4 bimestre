#include <iostream>
using namespace std;


/*
Atividade avaliativa sobre funÃ§Ãµes e vetores - 4Âº Bimestre
Entrega atÃ© 28/11/25.
Criar uma pasta no Github chamada "Trabalhos - 4Âº bimestre".
Salvar o arquivo como trabalho_funcao_vetores.cpp nessa pasta.

ENUNCIADO:
Observe os comentÃ¡rios numerados dentro do main.

VocÃª deve criar fora do main cada funÃ§Ã£o indicada para que os comandos executem corretamente.
Observe o nÃºmero de parÃ¢metros, o tipo de retorno ou se nÃ£o hÃ¡ retorno.

Para testar, deve descomentar (retirar os // de cada comando)

*** Use os atendimentos de hoje (quarta) e quinta para sanar dÃºvidas

AVALIAÃ‡ÃƒO:
VocÃª deve explicar o que fez no seu trabalho pessoalmente.

*/

void inicializar_vetor(int numero[]){
    for(int i = 0; i<10; i++){
        numero[i] = 0;
    }

}

void imprimir_vetor(int vet[]){
    for(int i = 0; i<10; i++){
        cout << vet[i] << " ";
    }cout << endl;

}

int le_numero_inteiro(string msg){
    int num;
    cout << msg << endl;
    cin >> num;

    return num;
}

bool buscar_valor(int vet[], int num1){
    for(int i = 0; i<10 ; i++){
        if(vet[i] == num1){
            return true;
        }else{
            return false;
        }
    }
}


int main() {

    int numeros[10];

    // 1. Chamar a funÃ§Ã£o para preencher o vetor com zeros
    inicializar_vetor(numeros);

    // 2. Chamar a funÃ§Ã£o que imprime o vetor
    imprimir_vetor(numeros);

    // 3. Solicitar ao usuÃ¡rio um valor para buscar no vetor usando a funÃ§Ã£o le_numero_inteiro("msg")
    int valor;
    valor = le_numero_inteiro("Digite um nÃºmero inteiro");

    // 4. Chamar a funÃ§Ã£o de busca
    bool encontrado = buscar_valor(numeros, valor);

    // 5. Informar resultado da busca
    if(encontrado){
         cout << "Valor encontrado!" << endl;
     } else {
         cout << "Valor NAO encontrado!" << endl;
     }

}
