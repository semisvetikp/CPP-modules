#include "Pony.hpp"

int only_digit(std:: string line)
{
	int i;

	i = 0;
	if (line.empty() || !line.size())
		return(1);
	while (line[i] != '\0')
	{
		if (std::isdigit(line[i]) == 0) 
			return(1);
		i++;
	}
	return (0);
}


int countEating(){

    std::cout << "Please enter how many times you want the pony eat\n";
    while (true)
	{
		std :: string line;
		getline(std::cin, line);
		if (line.empty() || !line.size())
			return(0);
		else if ((only_digit(line) == 0))
			return(std::stoi(line));
		else if (std::cin.eof())
			exit(1);
		else 
			std :: cout << "Oops, that input is invalid. Please try again.\n";
	}
}


void ponyOnTheStack(){
	int count;

	std::cout << "\n         -=It is a Pony on the stack=-\n";
	Pony ponyOnTheHeap("brown", "red", 4, 2000);
	ponyOnTheHeap.helloIamPony();
	count = countEating();
	ponyOnTheHeap.eating(count);
}

void ponyOnTheHeap(){
	int count;

	std::cout << "\n         -=It is a Pony on the heap=-\n";
	Pony *ponyOnTheStack = new Pony("black", "white", 4, 3000);
	if (!ponyOnTheStack){
		std::cout << "Could not allocate memory\n";
		return ;
	}
	ponyOnTheStack->helloIamPony();
	count = countEating();
	ponyOnTheStack->eating(count);
	delete ponyOnTheStack;
	ponyOnTheStack = nullptr;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return(0);
}