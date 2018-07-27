CC = g++

C_FLAGS = -Wall -std=c++11 

SRC2 = week2.cpp 
SRC4 = week4.cpp
SRC7 = week7.cpp
SRC9 = week9.cpp

all: 
	$(CC) $(SRC2) $(C_FLAGS) -o week2
	$(CC) $(SRC4) $(C_FLAGS) -o week4
	$(CC) $(SRC7) $(C_FLAGS) -o week7
	$(CC) $(SRC9) $(C_FLAGS) -o week9
clean:
	rm -rf *.o week2 week4 week7 week9
