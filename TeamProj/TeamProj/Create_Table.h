#pragma once
#include <iostream>

class CREATE_TABLE {
private:
	char* name;
	char* type;
	int size;
	char* default_value;
public:
	CREATE_TABLE() {
		this->name = new char[strlen(name) + 1];
		for (int i = 0; i < strlen(name)+1; i++)
			this->name[i] = '\0';
		this->type = new char[strlen(type) + 1];
		for (int i = 0; i < strlen(type) + 1; i++)
			this->type[i] = '\0';
		this->size = 0;
		this->default_value = new char[strlen(default_value) + 1];
		for (int i = 0; i < strlen(default_value) + 1; i++)
			this->default_value[i] = '\0';
	}
	CREATE_TABLE(char* name, char* type, int size, char* default_value) {
		this->name = new char[strlen(name) + 1];
		this->name = name;
		this->type = new char[strlen(type) + 1];
		this->type = type;
		this->size = size;
		this->default_value = new char[strlen(default_value) + 1];
		this->default_value = default_value;
	}
	~CREATE_TABLE() {

	}
};