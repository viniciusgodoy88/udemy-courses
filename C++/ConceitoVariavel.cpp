#include <iostream>
#include <tchar.h>

int main() {
	
	_tsetlocale(LC_ALL,_T("portuguese"));
	int NumVidas = 5;
	int Score = 1350;
	
	std::cout <<"*************INICIO DO JOGO****************" << std::endl;
	std::cout <<"Vidas Jogador: " << NumVidas << std::endl;
	std::cout <<"Pontuação: " << Score << std::endl;
	std::cout <<"Endereço que NumVidas ocupa na memória RAM: " << &NumVidas << std::endl;
	std::cout <<"Endereço que Pontuação ocupa na memória RAM: " << &Score << std::endl;
	std::cout <<"*****************************" << std::endl;
	
	
	
	std::cout <<"*************DURANTE O JOGO****************" << std::endl;
	Score = Score + 150;
	NumVidas = NumVidas - 1;
	
	std::cout <<"Vidas Jogador: " << NumVidas << std::endl;
	std::cout <<"Pontuação: " << Score << std::endl;
	
	
	
		
	system("PAUSE");
	
}
