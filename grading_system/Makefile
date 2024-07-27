# List of source files
SRC = input.c main.c memory.c string.c subjects.c

# List of object files
OBJ = $(SRC:.c=.o)

# Name of the final executable
TARGET = grade

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJ)
	gcc -o $(TARGET) $(OBJ)

# Compile each source file into an object file
%.o: %.c
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ)
