CC = gcc
CFLAGS = -Wall -Wextra
SRC = src/*.c
OUT = game

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT)