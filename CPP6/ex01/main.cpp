#include <iostream>
#include <string>

typedef struct Data
{
	std::string str1;
	int 		num;
	std::string str2;
}    		t_data;


void * serialize(void)
{
	char *address;
	std::string str1;
	std::string str2;

	address = new char[52];
	std::srand(time(0));
	int number = std::rand() % 50;
	for (int i = 0; i < 10; ++i)
	{
		str1 += std::rand() % 25 + 65;
		str2 += std::rand() % 25 + 65;
	}
	std::cout << "string1:" << str1 << "\nnumber:" << number << "\nstring2:" << str2 <<  std::endl;
	
	std::memcpy(&address[0], &str1, 24);
	std::memcpy(&address[24], &number, 4);
	std::memcpy(&address[28], &str2, 24);

	return (reinterpret_cast<void*>(address));
}

Data * deserialize(void * raw)
{
	Data *data = new Data;

	data->str1 = static_cast<std::string > (reinterpret_cast<char *>(raw));
	data->num = static_cast<int > (reinterpret_cast<char *>(raw)[24]);
	data->str2 = static_cast<std::string > (&reinterpret_cast<char *>(raw)[28]);
	return(data);
}

int main(void)
{
	Data *data;
	void *addr;

   	addr = serialize();
	data = deserialize(addr);
	std::cout << "string1:" << data->str1 << "\nnumber:" << data->num << "\nstring2:" << data->str2 << std::endl;
	std::cout << sizeof(Data) << sizeof(std::string);
	return (0);
}