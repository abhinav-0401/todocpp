#include <string>
#include <cstdint>

using std::uint32_t;
using std::string;

class Todo {

    private:
        string name{};
        uint32_t id{};

    public:
        Todo(string name, uint32_t id_value);

        void set_name(string value);
        string get_name();

        void set_id(uint32_t id_value);
        uint32_t get_id();
};