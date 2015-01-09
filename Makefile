CC = g++-4.9
LN = /bin/ln
all:
	$(CC) -std=c++11 src/*.cpp -o aspirem32.exe -lpthread
	$(LN) -f aspirem32.exe aspirem64.exe
