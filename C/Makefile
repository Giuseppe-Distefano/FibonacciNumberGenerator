compile:
	gcc -c main.c;
	gcc -o Fibonacci main.o;
	chmod +x Fibonacci;
	rm main.o;

test: Fibonacci
	./Fibonacci 1;
	./Fibonacci 5;
	./Fibonacci 12;
	./Fibonacci;
