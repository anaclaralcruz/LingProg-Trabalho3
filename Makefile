CPP = g++
CPPFLAGS = -Wall

OBJS = main.o Filme.o Catalogo.o

trabalho: $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $(OBJS)