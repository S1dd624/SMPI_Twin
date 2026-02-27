CC=mpicc
CFLAGS=-Wall -Wextra -O2
TARGET=topology_probe

all: $(TARGET)

$(TARGET): cptopology.c
	$(CC) $(CFLAGS) -o $(TARGET) cptopology.c

clean:
	rm -f $(TARGET)

run:
	mpirun -np 4 ./$(TARGET)
