output: main.out reservtion.out 
	gcc main.out reservation.out  -o output

main.out: main.c
	gcc -c main.c

reservation.out: reservation.c reservation.h
	gcc -c reservation.c

clean:
	rm *.out output
