CFLAGS += -I deps

SRC += pretty-hash.c

example: $(SRC) example.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) -f example
