selector.o: selector.c selector.h
	gcc -c selector.c
app.o: selector.c selector.h app.c
	gcc -c app.c
godown: selector.o app.o
	gcc selector.o app.o -o godown
