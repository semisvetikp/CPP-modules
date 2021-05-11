# include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : 
_name(name), _type(type) {

}

Zombie::Zombie(){

}

void Zombie::setType(std::string type){
	_type = type;
}

void Zombie::setName(std::string name){
	_name = name;
}

void Zombie::announce(){

	std::cout << "< " << _name << " (" << _type << ") > "<< "Braiiiiiiinnnssss..." << std::endl;
}

