Компілюємо C файл
gcc -c .\cfile.c

Компілюємо CPP файл
g++ -c .\main.cpp 

Лінкуємо CPP файл з C файлом і збираємо в бінарь main.exe 
g++ .\main.o .\cfile.o -o main.exe

Запускаємо бінарь
.\main.exe

--------------------------------

або все разом 
gcc -c .\cfile.c -o lib ; g++ -c .\main.cpp  -o main ; g++ .\main .\lib -o app ; .\app