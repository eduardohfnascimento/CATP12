#include<string>
#include "Pessoa.h"
#include<iostream>
#include <cstring>

#define ANOATUAL 2018

Pessoa::Pessoa()
{
	nome = "";
	ano = -1;
	sexo = 'I';
	idade = -1;
	std::cout << __func__ << std::endl;
}

Pessoa::Pessoa(std::string Nome, int Ano, char Sexo)
{
	int error;
	error = setNome(Nome);
	if (error)
		std::cout << "error" << std::endl;
	error = setAno(Ano);
	if (error)
		std::cout << "error" << std::endl;
	error = setSexo(Sexo);
	if (error)
		std::cout << "error" << std::endl;

}

Pessoa::~Pessoa()
{
	std::cout << __func__ << std::endl;
}

int Pessoa::setNome(std::string Nome)
{
	int error = 1;
	if (strcmp(Nome.c_str(), "") != 0)
	{
		nome = Nome;
		error = 0;
	}
	return error;
}

int Pessoa::setAno(int Ano)
{
	int error = 1;
	if (Ano > -1 && Ano <= ANOATUAL)
	{
		ano = Ano;
		idade = ANOATUAL - Ano;
		error = 0;
	}
	return error;
}

int Pessoa::setSexo(char Sexo)
{
	int error = 1;
	if (Sexo == 'M' || Sexo == 'm' || Sexo == 'F' || Sexo == 'f')
	{
		sexo = Sexo;
		error = 0;
	}
	return error;
}

std::string Pessoa::getNome()
{
	return nome;
}

int Pessoa::getAno()
{
	return ano;
}

int Pessoa::getIdade()
{
	return idade;
}

char Pessoa::getSexo()
{
	return sexo;
}