build:
	clear && g++ -std=c++17 -o main -Wall \
	main.cpp \
	separator.cpp \
	&& ./main

run:
	clear && ./main
