CC=gcc

CFLAGS_WARN = -Wall

DEFINE =
INCLUDE = -I.
CFLAGS = -fPIC -Wextra -g
DEFINE = $(CFLAGS)

SOURCES = $(wildcard *.c)
OBJS = $(patsubst %.c,%.o,$(SOURCES))

TARGET  = comm.so

all:$(OBJS)
	$(CC) -o $(TARGET) -shared $(OBJS)	

%.o:%.c
	$(CC) -c $(CFLAGS_WARN) $(DEFINE) $(INCLUDE) $< -o $@	

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)
