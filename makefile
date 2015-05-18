# Directories
SRC_DIR := src
INC_DIR := include
OBJ_DIR := obj
LIB_DIR := lib

# Compiler options
CC       := g++
CC_FLAGS := -I$(INC_DIR)
LD_FLAGS := -lncurses

# Files
SRC := $(wildcard  $(SRC_DIR)/*.cpp)
INC := $(wildcard  $(INC_DIR)/*.h)
OBJ := $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.cpp=.o)))
LIB := $(wildcard  $(LIB_DIR)/*)

# Executable
TARGET := Editor

# Main target
$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LD_FLAGS)

# Main source file (no header)
$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) $(CC_FLAGS) -c -o $@ $<

# Objects
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)/%.h
	$(CC) $(CC_FLAGS) -c -o $@ $<

# Clean target
clean:
	rm -rf $(OBJ) $(TARGET)

# Phony targets
.PHONY: clean
