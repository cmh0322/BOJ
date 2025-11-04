CC = gcc
CFLAGS = -Wall -c
DEPFLAGS = -MMD -MP

%.o: %.c
	$(CC) $(CFLAGS) $(DEPFLAGS) -o $@ $<

SRCS = main.c myfunc.c
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

TARGET = BOJ_2839

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	rm -f $(TARGET) $(OBJS) $(DEPS)

-include $(DEPS)
