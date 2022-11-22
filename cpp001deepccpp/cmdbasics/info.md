# g++ -c .\program.cpp  
создать объектный файл, который содержит инструкции для процессора  
ключ -с преобразует исходник в объектный файл  

# g++ -o application.exe -Wall .\program.cpp  
создать объектный файл, который содержит инструкции для процессора  

# objdump -d .\program.o >> program_o.asm  
дизассемблировать объект program.o в файл assembly.txt  

# g++ -o program.exe -Wall .\program.cpp  
собрать программу  