#include <iostream>
using namespace std;

/*
 VOCÃŠ DEVE COMPLETAR O CÃ“DIGO DO JOGO DA VELHA
 DEVE INSERIR FUNÃ‡Ã•ES PARA QUE O JOGO REALIZE JOGADAS PARA CADA JOGADOR
 ATÃ‰ QUE ALGUM GANHE OU A VELHA GANHE
 LEMBRE-SE DE QUE OCORRE A VELHA QUANDO TODAS AS POSIÃ‡Ã•ES FORAM JOGADAS
 UM JOGADOR GANHA QUANDO MARCA SEU SÃMBOLO EM UMA LINHA, COLUNA OU DIAGONAL

VOCÃŠ PODE CONSULTAR O EXERCÃCIO DE ADIVINHAÃ‡ÃƒO PARA LEMBRAR COMO USAR O WHILE PARA FAZER JOGADAS.
DEVERÃ CRIAR FUNÃ‡Ã•ES PARA VERIFICAR SE ALGUÃ‰M GANHOU O JOGO

EM CASOS DE DÃšVIDAS COMPAREÃ‡A AOS ATENDIMENTOS;



Formato de entrega:

Salvar o arquivo como trabalho_jogo_da_velha.cpp e inserir na pasta Trabalhos do seu Github

*/
// JOGO DA VELHA - INICIADO
// 20/08/2025
// Jogo da velha 3x3

void jogada(char mat[3][3], char jog){

	// Fazer uma jogada do jogador
	int pos_linha, pos_coluna;
	cout << "Jogador " << jog << ", digite uma posiÃ§Ã£o:" << endl;
	cout << "Digite a linha e a coluna da jogada" << endl;
	cin >> pos_linha >> pos_coluna;
	cout << "VocÃŠ digitou a linha " << pos_linha << " e a coluna " << pos_coluna << endl;

	mat[pos_linha][pos_coluna] = jog; // a jogada foi marcada na matriz

	// Imprimir o tabuleiro apÃ³s a jogada
	cout << "ConfiguraÃ§Ã£o do tabuleiro:" << endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

}

bool verificar_ganhador(char matr[3][3], char joga){

    if(matr[0][0] == joga && matr[0][1] == joga && matr[0][2] == joga ||
       matr[1][0] == joga && matr[1][1] == joga && matr[1][2] == joga ||
       matr[2][0] == joga && matr[2][1] == joga && matr[2][2] == joga ||
       matr[0][0] == joga && matr[1][0] == joga && matr[2][0] == joga ||
       matr[0][1] == joga && matr[1][1] == joga && matr[2][1] == joga ||
       matr[0][2] == joga && matr[1][2] == joga && matr[2][2] == joga ||
       matr[0][0] == joga && matr[1][1] == joga && matr[2][2] == joga ||
       matr[0][2] == joga && matr[1][1] == joga && matr[2][0] == joga){

        return true;
       }else{
        return false;
       }

}





int main(){

	char tabuleiro[3][3]; //declarando uma matriz com 3 linhas e 3 colunas
	char vazio = '*';

	// Preencher o tabuleiro com posiÃ§Ãµes vazias
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			tabuleiro[i][j] = vazio;
		}
	}


	cout << "ConfiguraÃ§Ã£o do tabuleiro:" << endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << tabuleiro[i][j] << " ";
		}
		cout << endl;
	}


	int tentativas = 1;

	while(tentativas <= 9){
        jogada(tabuleiro, 'X');
        tentativas++;
        if(verificar_ganhador(tabuleiro, 'X')){
            cout << "O jogador X venceu!" << endl;
            break;
        }

        if(tentativas < 9){
            jogada(tabuleiro, 'O');
            tentativas++;
            if(verificar_ganhador(tabuleiro, 'O')){
                cout << "O jogador O venceu!" << endl;
                break;
            }

        }

   }if(tentativas > 9){
        cout << "Deu velha!" << endl;
   }


}
