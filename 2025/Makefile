DAY ?= 0
NEXT_DAY=$(shell echo $$(($(DAY)+1)))
NEW_DAY_DIR = day$(NEXT_DAY)

.PHONY: new

new:
	@mkdir -p $(NEW_DAY_DIR)/part1 $(NEW_DAY_DIR)/part2
	
	# Create files for Part 1
	@touch $(NEW_DAY_DIR)/part1/main.cpp $(NEW_DAY_DIR)/part1/input.txt
	@echo "// C++ solution for Day $(NEXT_DAY) Part 1" > $(NEW_DAY_DIR)/part1/main.cpp
	@echo "#include <iostream>\nint main() { /* Part 1 code */ return 0; }" >> $(NEW_DAY_DIR)/part1/main.cpp
	
	# Create files for Part 2
	@touch $(NEW_DAY_DIR)/part2/main.cpp $(NEW_DAY_DIR)/part2/input.txt
	@echo "// C++ solution for Day $(NEXT_DAY) Part 2" > $(NEW_DAY_DIR)/part2/main.cpp
	@echo "#include <iostream>\nint main() { /* Part 2 code */ return 0; }" >> $(NEW_DAY_DIR)/part2/main.cpp
	
	@echo "Created full structure for day$(NEXT_DAY)."

# --- C++ Build Configuration ---
CXX = g++               # The C++ compiler to use (GCC)
CXXFLAGS = -std=c++20   # Use C++20 standard
WARNINGS = -Wall -Wextra -Werror # Set common warnings for good practice

# The target to build and run (e.g., day1)
TARGET_DAY ?= 1
TARGET_PART ?= 1  # Defaults to Part 1
SRC_FILE = day$(TARGET_DAY)/part$(TARGET_PART)/main.cpp
OUTPUT_EXEC = day$(TARGET_DAY)/part$(TARGET_PART)/solution

.PHONY: build run clean

# Build/Compile
build: $(SRC_FILE)
	$(CXX) $(SRC_FILE) $(CXXFLAGS) $(WARNINGS) -o $(OUTPUT_EXEC)
	@echo "Successfully compiled day$(TARGET_DAY) part $(TARGET_PART) to $(OUTPUT_EXEC)\n"

# Build + Run
run: build
	@echo "--- Running Day $(TARGET_DAY) Part $(TARGET_PART)Solution ---"
	@$(OUTPUT_EXEC) < day$(TARGET_DAY)/part$(TARGET_PART)/input.txt

# Cleanup
clean:
	@rm -f day*/solution
	@echo "Cleaned up all compiled solutions."