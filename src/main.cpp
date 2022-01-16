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
    std::cout << "\x1B[2J\x1B[H";
    for (Project& p : proj_list) {
        if (p.get_id() == proj_id) {
            auto iterator{ proj_list.begin() + proj_id };
            proj_list.erase(iterator);
        }
    }
}

unsigned int render_proj(Project& proj, bool take_choice) {
    std::cout << "\x1B[2J\x1B[H";

    for (Todo& t : proj.get_todo_list()) {
        std::cout << t.name << "\n";
    }

    unsigned int choice{};

    if (take_choice) {
        std::cin >> choice;
        return choice;
    }
    else {
        return 10;
    }
}

int main() {
    Project default_proj("default", proj_list.size());
    default_proj.add_todo("second sike!");
    proj_list.push_back(default_proj);

    unsigned int choice{};
    bool on = true;

    while (on) {
        choice = render_proj(default_proj, true);

        switch(choice) {
            case 0:
                on = false;
                break;
            case 1:
                default_proj.add_todo("first");
                render_proj(default_proj, false);
                break;
            case 2:
                std::cout << "Invalid input!";
                render_proj(default_proj, false);
                break;
        }
    }

}