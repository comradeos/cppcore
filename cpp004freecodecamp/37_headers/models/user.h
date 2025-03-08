#ifndef USER_H
#define USER_H

#include <string>

class User {
    public:
        std::string name;
        User(std::string name);
        void info();
        ~User();
};

#endif