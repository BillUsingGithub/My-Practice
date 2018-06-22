hello: hello.o
	g++ hello.o -o hello
	rm hello.o

hello.o: hello.cpp
	g++ hello.cpp -c -o hello.o

clean: hello
	rm hello
