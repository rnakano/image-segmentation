main: main.cpp
	g++ main.cpp `pkg-config --cflags opencv` `pkg-config --libs opencv`

