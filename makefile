CC = gcc
AR=ar
FLAGS = -Wall
LOOP = basicClassification.o advancedClassificationLoop.o
RECUS = basicClassification.o advancedClassificationRecursion.o

all: loops recursives recursived loopd mains maindloop maindrec 

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 

loops: libclassloops.a

recursives: libclassrec.a

loopd: libclassloops.so

recursived: libclassrec.so

libclassloops.a: $(LOOP)
	$(AR) -rcs libclassloops.a $(LOOP)

libclassrec.a: $(RECUS)
	$(AR) -rcs libclassrec.a $(RECUS)	

libclassloops.so: $(LOOP)
	$(CC) -shared -fPIC -o libclassloops.so $(LOOP)

libclassrec.so: $(RECUS)
	$(CC) -shared -fPIC -o libclassrec.so $(RECUS)

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

.PHONY: clean all loops loopd recursives recursived
clean:
	rm -f *.o *.a *.so *.gch mains maindloop maindrec
