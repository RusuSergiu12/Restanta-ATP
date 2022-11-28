#pragma once
#include <iostream>

class CREATE_TABLE {
private:
	std::string name;
	std::string type;
	int size;
	std::string default_value;

public:
	CREATE_TABLE(std::string name, std::string type, int size, std::string default_value)){
		this->name = name;
		this->type = type;
		this->size = size;
		this->default_value = default_value;
	}
	CREATE_TABLE() {
		this->name = "";
		this->type = "";
		this->size = 0;
		this->default_value = "";
	}
	getAll() {
		return this->name;
		return this->type;
		return this->size;
		return this->default_value;
	}

	~CREATE_TABLE() {

	}
};