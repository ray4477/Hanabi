# Object name
OBJ_NAME = hanabi

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Wextra -std=c++11

# Source directory
SRCDIR = src
INCDIR = inc
OBJDIR = build

# Source files
SRCS = $(wildcard $(SRCDIR)/*.cpp)

# Object directory
OBJDIR = build

# Object files
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

# Executable name
TARGET = $(OBJDIR)/$(OBJ_NAME)

# Build rule
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Dependency rule
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# Create object directory
$(OBJDIR):
	mkdir -p $@

# Clean rule
clean:
	rm -rf $(OBJDIR)

run:
	./$(TARGET)
