CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11 -fsanitize=address
CFLAGS_GCOV=-fprofile-arcs -ftest-coverage
LIBS=-lcheck -lgcov
LFLAGS=$(LIBS) $(CFLAGS_GCOV) -fsanitize=address

test=test_sprintf.out
test_flags=test_sprintf_flags.out

run: $(test)
		./$(test)

run_flags: $(test_flags)
		./$(test_flags)

$(test): test_sprintf.c
	$(CC) $< -o $@

$(test_flags): test_sprintf.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o *.out