#include "./include/todo.h"
#include <string>
#include <cstdint>

Todo::Todo(std::string name, std::uint32_t id_value) {
    this->name = name;
    this->id = id_value;
}

void Todo::set_name(string value) {
    this->name = value;
}

std::string Todo::get_name() {
    return this->name;
}

void Todo::set_id(std::uint32_t id_value) {
    this->id = id_value; 
}

std::uint32_t Todo::get_id() {
    return this->id;
}

