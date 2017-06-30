src = $(wildcard *.c)
obj = $(src:.c=.o)

LDFLAGS = `sdl2-config --cflags --libs` -lSDL2_ttf
CFLAGS = -Wall -Wextra -Werror -pedantic

game: $(obj)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) myprog