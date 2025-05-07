CXX = g++
CXXFLAGS = -std=c++11 -Iinclude
SRC = src/Donor.cpp src/DonorManager.cpp src/InventoryManager.cpp src/RequestManager.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = bbms

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)