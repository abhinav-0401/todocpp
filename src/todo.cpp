#include "./include/todo.h"
#include <vector>
#include <string>

Project::Project(std::string proj_name, unsigned int proj_id) {
    this->name = proj_name;
    this->id = proj_id;
}

void Project::add_todo(std::string todo_name) {
    Todo new_todo(todo_name);
    this->todo_list.push_back(new_todo);
}

void Project::delete_todo(unsigned int todo_id) {
    auto iterator{ this->todo_list.begin() + todo_id }; 
    this->todo_list.erase(iterator);
}

void Project::toggle_todo(unsigned int todo_id) {
    for (auto& t : this->todo_list) {
        if (t.id == todo_id) {
            t.done = !t.done;
        }
    }
}

unsigned int Project::get_id() {
    return this->id;
}

std::vector<Todo> Project::get_todo_list() {
    return this->todo_list;
}