# Makefile для праекта падліку паліндромаў

bin/main: obj/main.o obj/palindrome.o 
	gcc -o bin/main obj/main.o obj/palindrome.o

obj/main.o: src/main.c include/palindrome.h
	gcc -c src/main.c -o obj/main.o

obj/palindrome.o: src/palindrome/palindrome.c include/palindrome.h
	gcc -c src/palindrome/palindrome.c -o obj/palindrome.o

clean:
	rm -f obj/* bin/*