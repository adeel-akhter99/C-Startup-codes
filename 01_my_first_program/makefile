all: hello.exe

hello.exe: hello.o
	 g++ -o hello.exe hello.o

hello.o: hello.cpp
	 g++ -c hello.cpp
     
clean:
	 rm hello.o hello.exe
