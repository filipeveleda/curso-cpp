#include <iostream>

using namespace std;

int main(){

  cout << "************************************" << endl;
  cout << "* Bem vindos ao jogo de advinhação *" << endl;
  cout << "************************************" << endl;

  const int NUMERO_SECRETO = 42;

  // cout << "O numero secreto é "<< NUMERO_SECRETO << ". Não conte para ninguém." << endl;
  bool nao_acertou = true;
  int tentativas = 0;


  while(nao_acertou){

    int chute;
    tentativas++;
    cout << "Tentativa: " << tentativas << endl;
    cout << "Qual o seu chute? ";
    cin >> chute;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;
    bool menor = chute < NUMERO_SECRETO;

    if (acertou){
      cout << "Parabéns! Você acertou, o numero secreto é " << NUMERO_SECRETO << "." << endl;
      nao_acertou = false;
    }else if(maior){
      cout << "Chute foi maior que o numero secreto!" << endl;
    }else if(menor){
      cout << "Chute menor de o numero secreto!" << endl;
    }

  }

  cout << "Fim de jogo!" << endl;
  cout << "Você acertou o numero secreto em " << tentativas << " tentativas." << endl;

}







