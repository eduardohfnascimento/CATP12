#include"Pessoa.h"


int main()
{
	Pessoa p;
	Pessoa *People = new Pessoa("Eduardo", 1996, 'M');

	std::cout << p.getAno() << p.getIdade() << p.getSexo() << p.getNome() << std::endl;
	std::cout << People->getAno() << People->getIdade() << People->getSexo() << People->getNome() << std::endl;

	system("pause") ;
	return 0;

}