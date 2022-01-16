#include <string>
#include <vector>

struct Todo {
    std::string name{};
    bool done = false;
    unsigned int id{};

    Todo(std::string name) {
        this->name = name;
    }
};

class Project {
    std::string name{};
    unsigned int id{};
    std::vector<Todo> todo_list;

public:
    Project(std::string proj_name, unsigned int proj_id);
    void add_todo(std::string todo_name);
    void delete_todo(unsigned int todo_id);
    void toggle_todo(unsigned int todo_id);
    unsigned int get_id();
    std::vector<Todo> get_todo_list();
};