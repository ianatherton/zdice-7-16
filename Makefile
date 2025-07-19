CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = zdice
SRC = main.c game.c gamerunner.c random.c cup.c players.c
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Link the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Generate dependencies automatically
depend: $(SRC)
	$(CC) -MM $(CFLAGS) $^ > .depend

# Include dependencies if they exist
-include .depend

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up build artifacts
clean:
	rm -f $(TARGET) $(OBJ) .depend *~ core

# Clean everything and rebuild
rebuild: clean all

# Debug build with additional debug symbols
debug: CFLAGS += -DDEBUG -g3
debug: clean all

# Release build with optimizations
release: CFLAGS += -O2 -DNDEBUG
release: clean all

# Help target
help:
	@echo "Available targets:"
	@echo "  all      : Build the executable (default)"
	@echo "  clean    : Remove build artifacts"
	@echo "  rebuild  : Clean and rebuild"
	@echo "  run      : Build and run the program"
	@echo "  debug    : Build with debug symbols"
	@echo "  release  : Build with optimizations"
	@echo "  depend   : Generate dependencies"
	@echo "  help     : Show this help message"

.PHONY: all clean rebuild run debug release depend help
