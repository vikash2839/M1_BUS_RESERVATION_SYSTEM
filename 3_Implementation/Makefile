
output: main.o reservation.o 
   gcc main.o reservation.o -o output

main.o: main.c
       gcc-main.c

reservation.o: reservation.c reservation.h
        gcc -c reservation.c

clean:
    rm *.o output