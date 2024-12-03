#include "httplib.h"
#include <iostream>

int main() {
    httplib::Server server;

    server.Get("/hello", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Hello, World!", "text/plain");
    });

    server.Get("/greet", [](const httplib::Request& req, httplib::Response& res) {
        auto name = req.get_param_value("name");
        std::string response = "Hello, " + name + "!";
        res.set_content(response, "text/plain");
    });

    server.Post("/echo", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("You sent: " + req.body, "text/plain");
    });

    std::cout << "Server started at http://localhost:8080" << std::endl;
    server.listen("0.0.0.0", 8080);

    return 0;
}
