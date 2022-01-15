#include <iostream>
#include <vector>
#include <string>
#include "./include/todo.h"

std::vector<Project> proj_list;

void create_project(std::string proj_name) {
    Project new_proj(proj_name, proj_list.size());
    proj_list.push_back(new_proj);
}

void remove_project(unsigned int proj_id) {
    for (Project& p : proj_list) {
        if (p.get_id() == proj_id) {
            auto iterator{ proj_list.begin() + proj_id };
            proj_list.erase(iterator);
        }
    }
}

void render_proj(Project proj) {
    
}

int main() {
    
}