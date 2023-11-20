#include <iostream>
#include <string>

class IButton {
public:
    virtual void render(){};
    virtual void onClick(){};
};

class WinButton: public IButton {
public:
    void render() override { printf("Win Button Rendered!\n"); };
    void onClick() override { printf("Win Button Clicked!\n"); };
};

class WebButton: public IButton {
public:
    void render() override { printf("Web Button Rendered!\n"); };
    void onClick() override { printf("Web Button Clicked!\n"); };
};

class IDialog { ;
public:
    virtual IButton createButton(){ return {}; };
};

class WinDialog : public IDialog {
public:
    IButton createButton() override { return * new WinButton(); };
};

class WebDialog : public IDialog {
public:
    IButton createButton() override { return * new WebButton(); };
};

class Application {
private:
    IDialog _dialog;
public:
    Application(string system) {
        if (system == "win") {
            this->_dialog = *new WinDialog();
        } else if (system == "web") {
            this->_dialog = *new WebDialog();
        }

        IButton button = _dialog.createButton();
        button.onClick();
    }
};

void FactoryMethodTest() {
    // не працює (
    Application app = *new Application("win");
}