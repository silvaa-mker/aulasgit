#include<iostream>

using namespace std;

double calculaComissao(double vlVenda, double txComissao)

{
	return vlVenda * txComissao;
}

void mostraResultado(string nome, double Comissao){
	cout << "vendedor: " << nome <<endl;
	cout << "Comissao: R$ " << Comissao <<endl;	
}
int main(){
    string nome;
	double valorVenda;
	double taxaComissao = 0.05;
	double Comissao;
	
	cout << "Digite seu nome: "<<endl;
	cin >> nome;
	
	cout << "Digite o valor da venda: "<<endl;
	cin >> valorVenda;
	
	Comissao = calculaComissao(valorVenda, taxaComissao);
	
	mostraResultado(nome, Comissao);
		
	return 0;
}
