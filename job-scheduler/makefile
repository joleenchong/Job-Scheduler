CC = gcc

CFLAGS = -g -Wall

TARGET = job-scheduler

all : $(TARGET)

$(TARGET): $(TARGET).cpp
		$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
		$(RM) $(TARGET)