CC = g++

C_FLAGS = -Wall -std=c++11 

SRC1 = week1.cpp 
SRC2 = week2.cpp 
SRC4 = week4.cpp
SRC5 = week5.cpp
SRC7 = week7.cpp
SRC8 = week8.cpp
SRC9 = week9.cpp
SRC12 = week12.cpp

all: 
	$(CC) $(SRC1) $(C_FLAGS) -o week1
	$(CC) $(SRC2) $(C_FLAGS) -o week2
	$(CC) $(SRC4) $(C_FLAGS) -o week4
	$(CC) $(SRC7) $(C_FLAGS) -o week7
	$(CC) $(SRC8) $(C_FLAGS) -o week8
	$(CC) $(SRC9) $(C_FLAGS) -o week9
	$(CC) $(SRC12) $(C_FLAGS) -o week12
clean:
	rm -rf *.o week1 week2 week4 week7 week8 week9 week12
