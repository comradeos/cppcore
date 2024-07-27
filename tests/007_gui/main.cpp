#include <gtk/gtk.h>

// Функция обратного вызова для кнопки
static void on_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("Button clicked!\n");
}

int main(int argc, char *argv[]) {
    // Инициализация GTK
    gtk_init(&argc, &argv);

    // Создание нового окна
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Simple GTK+ Interface");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    // Создание новой кнопки
    GtkWidget *button = gtk_button_new_with_label("Click Me");

    // Подключение сигнала "clicked" к функции обратного вызова
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);

    // Добавление кнопки в окно
    gtk_container_add(GTK_CONTAINER(window), button);

    // Подключение сигнала "destroy" для закрытия окна
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Отображение всех виджетов в окне
    gtk_widget_show_all(window);

    // Запуск основного цикла GTK
    gtk_main();

    return 0;
}