#include<iostream>
#include<string>

class Pessoa
{
private:
	std::string nome;
	int ano;
	char sexo;
	int idade;

public:
	Pessoa();
	Pessoa(std::string Nome, int Ano, char Sexo);
	~Pessoa();
	int setNome(std::string Nome);
	int setAno(int Ano);
	int setSexo(char Sexo);
	std::string getNome();
	int getAno();
	int getIdade();
	char getSexo();
};