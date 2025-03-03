# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -g

# Source and Object Files
SRCS = main.c my_linked_list.c
OBJS = $(SRCS:.c=.o)
HEADERS = my_linked_list.h

# Executable Name
TARGET = my_program

# Default Rule (Build Executable)
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compiling Source Files into Object Files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Command (Remove Object Files & Executable)
clean:
	rm -f $(OBJS) $(TARGET)

# Phony Targets
.PHONY: all clean