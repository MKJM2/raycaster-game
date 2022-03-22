CC=g++
default: Game.cpp
	$(CC) -o game.out Game.cpp -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17

release: Game.cpp
	$(CC) -o game.out Game.cpp -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17 -O3
