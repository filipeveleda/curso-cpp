#include <iostream>

using namespace std;

int main(){

  cout << "************************************" << endl;
  cout << "* Bem vindos ao jogo de advinhação *" << endl;
  cout << "************************************" << endl;

  int numero_secreto = 42;

  cout << "O numero secreto é "<< numero_secreto << ". Não conte para ninguém." << endl;

  int chute;
  cout << "Qual o seu chute? ";
  cin >> chute;


  bool acertou = chute == numero_secreto;
  bool maior = chute > numero_secreto;
  bool menor = chute < numero_secreto;


  if (acertou){
    cout << "Parabéns! Você acertou o numero secreto!" << endl;
  }else if(maior){
    cout << "Chute foi maior que o numero secreto!" << endl;
  }else if(menor){
    cout << "Chute menor de o numero secreto!" << endl;
  }


}







