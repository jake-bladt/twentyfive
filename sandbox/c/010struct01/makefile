kitten.o: kitten.c kitten.h
	gcc -c kitten.c
app.o: kitten.c kitten.h app.c
	gcc -c app.c
purr: kitten.o app.o
	gcc kitten.o app.o -o purr
