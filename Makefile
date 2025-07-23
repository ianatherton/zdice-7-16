CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = zdice
SRC = main.c game.c gamerunner.c random.c cup.c players.c
DEBUG_SRC = main.c game.c gamerunner.c random.c cup.c players.c tests.c
BUILD_DIR = obj
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
DEBUG_OBJ = $(DEBUG_SRC:%.c=$(BUILD_DIR)/%.o)

# Default target
all: $(TARGET)

# Link the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files to object files in build directory
$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

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
	rm -f $(TARGET) .depend *~ core
	rm -rf $(BUILD_DIR)

# Clean everything and rebuild
rebuild: clean all

# Debug build with additional debug symbols
debug: CFLAGS += -DDEBUG -g3
debug: clean $(BUILD_DIR) $(DEBUG_OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(DEBUG_OBJ)
	./$(TARGET)

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
