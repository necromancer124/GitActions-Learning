CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/math.c
TEST_SRC = tests/test_math.c
TARGET = test_math

all: $(TARGET)

$(TARGET): $(SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) $(SRC) $(TEST_SRC) -o $(TARGET)

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
