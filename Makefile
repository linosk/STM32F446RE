CC = arm-none-eabi-gcc
# CFLAGS = -mcpu=cortex-m4 -mthumb -Wall -O2
SRC = main.c
OBJ = main.o

all: $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

# arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -nostdlib -nostartfiles -g -O0 -c main.c -o main.o
# arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -nostdlib -nostartfiles -g -O0 -c startup_stm32f446r.c -o startup_stm32f446r.o

# arm-none-eabi-gcc -nolibc -nostartfiles -T stm32f446r.ld main.o startup_stm32f446r.o -o testo.elf

