SRC=myname.c
BIN=myname
CC=gcc
FLAG=-std=c99 -Os

$(BIN): $(SRC)
	$(CC) $(SRC) $(FLAG) -o $@

clear:
	env rm -f $(BIN)
