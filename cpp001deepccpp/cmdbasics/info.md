# g++ -c .\square.cpp  
создать объектный файл, который содержит инструкции для процессора  
ключ -с преобразует исходник в объектный файл  

# g++ -o square.exe -Wall .\square.cpp  
создать объектный файл, который содержит инструкции для процессора  

# objdump -d .\square.o >> square.o.asm  
дизассемблировать объект program.o в файл square.o.asm   

# g++ -o square.exe -Wall .\square.cpp  
собрать программу  

# objdump -d -r .\main.o >> main.o.asm 
ключ -r информация о релокациях