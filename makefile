#
# Created by Avichai Mizrachi and Stav Avitan on 22/11/2022.
#
FLAGS = -Wall -g
CC = gcc
LIBLOOP = basicClassification.o advancedClassificationLoop.o
LIBREC = basicClassification.o advancedClassificationRecursion.o
OBJECTS = maindrec maindloop mains libclassloops.so libclassrec.so libclassrec.a libclassloops.a

all: maindrec maindloop mains libclassrec.a libclassrec.so libclassloops.so libclassloops.a main.o advancedClassificationLoop.o advancedClassificationRecursion.o basicClassification.o

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

basicClassification.o: basicClassification.c
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

libclassloops.a: $(LIBLOOP)
	ar -rcs libclassloops.a $(LIBLOOP)

libclassrec.a: $(LIBREC)
	ar -rcs libclassrec.a $(LIBREC)

libclassrec.so: $(LIBREC)
	$(CC) $(FLAGS) -shared -fPIC -o libclassrec.so $(LIBREC)

libclassloops.so: $(LIBLOOP)
	$(CC) $(FLAGS) -shared -fPIC -o libclassloops.so $(LIBLOOP)

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

.PHONY: clean
clean:
	rm -rf *.o *.gch *.so *.a mains maindloop maindrec