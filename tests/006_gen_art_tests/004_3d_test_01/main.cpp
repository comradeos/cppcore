#include "libs/glew/include/GL/glew.h"
#include "libs/glfw/include/GLFW/glfw3.h"
#include "libs/glm/glm/glm.hpp"
#include "libs/glm/glm/gtc/matrix_transform.hpp"

int main() {
    // Инициализация GLFW
    if (!glfwInit()) return -1;

    // Создание окна
    GLFWwindow* window = glfwCreateWindow(1000, 1000, "3D Space", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Создание контекста OpenGL
    glfwMakeContextCurrent(window);

    // Инициализация GLEW
    if (glewInit() != GLEW_OK) {
        glfwTerminate();
        return -1;
    }

    // Настройка вида и проекции
    glm::mat4 projection = glm::perspective(glm::radians(45.0f), 1.0f, 0.1f, 2000.0f);
    glm::mat4 view = glm::lookAt(
        glm::vec3(500, 500, 500), // Позиция камеры в мировом пространстве
        glm::vec3(0, 0, 0), // Точка, куда смотрит камера
        glm::vec3(0, 1, 0)  // Вектор "вверх"
    );

    // Главный цикл
    while (!glfwWindowShouldClose(window)) {
        // Очистка буферов
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Здесь будет код для рендеринга объектов

        // Обмен буферов и обработка событий
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

// g++ main.cpp -o your_application_name -I./libs/glew/include -I./libs/glfw/include -I./libs/glm -L./libs/glew/lib -L./libs/glfw/lib -lGLEW -lGLFW -lGL -lX11 -lpthread -lXrandr -lXi -ldl