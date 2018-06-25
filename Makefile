CC = g++

C_FLAGS = -Wall -std=c++11

SRC1 = week2.cpp 
SRC2 = week4.cpp
SRC3 = week5.cpp

all: 
	$(CC) $(SRC1) $(C_FLAGS) -o week2
	$(CC) $(SRC2) $(C_FLAGS) -o week4
	$(CC) $(SRC3) $(C_FLAGS) -o week5
clean:
	rm -rf *.o week2 week4 week5
