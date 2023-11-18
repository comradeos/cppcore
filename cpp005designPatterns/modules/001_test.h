using namespace std;

class Person001 {
public:
    Person001(string name, int id) {
        this->name = std::move(name);
        this->id = id;
    }
    string name;
    void showId() const {
        std::cout << "Hello, my id is " << this->id << std::endl;
    }
    void setId(int newId) {
        this->id = newId;
    }
private:
    int id;
};

void testOop() {
    Person001 person("Iaroslav Os", 1);
    person.setId(931203);
    printf("%s\n", person.name.c_str());
    person.showId();
}
