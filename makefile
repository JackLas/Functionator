main.exe: main.cpp
	g++ $^ -o $@ -Wall -std=c++17
	$@