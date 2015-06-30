all: lost.cc
	g++ lost.cc -o lost

clean:
	$(RM) lost
