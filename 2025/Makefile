DAY ?= 0
NEXT_DAY=$(shell echo $$(($(DAY)+1)))
NEW_DAY_DIR = day$(NEXT_DAY)

.PHONY: new

new:
	@mkdir -p $(NEW_DAY_DIR)
	@touch $(NEW_DAY_DIR)/main.cpp $(NEW_DAY_DIR)/input.txt
	@echo "// C++ solution for Advent of Code Day $(NEXT_DAY)" > $(NEW_DAY_DIR)/main.cpp
	@echo "#include <iostream>" >> $(NEW_DAY_DIR)/main.cpp
	@echo "#include <fstream>" >> $(NEW_DAY_DIR)/main.cpp
	@echo "#include <string>" >> $(NEW_DAY_DIR)/main.cpp
	@echo "" >> $(NEW_DAY_DIR)/main.cpp
	@echo "int main() {" >> $(NEW_DAY_DIR)/main.cpp
	@echo "    // Your code goes here" >> $(NEW_DAY_DIR)/main.cpp
	@echo "    return 0;" >> $(NEW_DAY_DIR)/main.cpp
	@echo "Created directories and files for day$(NEXT_DAY) with starter C++ code."

# --- C++ Build Configuration ---
CXX = g++               # The C++ compiler to use (GCC)
CXXFLAGS = -std=c++20   # Use C++20 standard
WARNINGS = -Wall -Wextra -Werror # Set common warnings for good practice

# The target to build and run (e.g., day1)
TARGET_DAY ?= 1
SRC_FILE = day$(TARGET_DAY)/main.cpp
OUTPUT_EXEC = day$(TARGET_DAY)/solution

.PHONY: build run clean

# Target 1: Build/Compile
build: $(SRC_FILE)
	$(CXX) $(SRC_FILE) $(CXXFLAGS) $(WARNINGS) -o $(OUTPUT_EXEC)
	@echo "Successfully compiled day$(TARGET_DAY) to $(OUTPUT_EXEC)"

# Target 2: Run
run: build
	@echo "--- Running Day $(TARGET_DAY) Solution ---"
	@$(OUTPUT_EXEC) < day$(TARGET_DAY)/input.txt

# Target 3: Cleanup
clean:
	@rm -f day*/solution
	@echo "Cleaned up all compiled solutions."