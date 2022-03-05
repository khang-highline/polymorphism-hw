CC = cl.exe
CFLAGS = /EHsc /c
LINK = link.exe
LDFLAGS = 
RM = rm -rf
SHELL = cmd.exe
.PHONY = all clean

all: main.exe

main.exe: main.obj shapes.obj
	$(LINK) $(LDFLAGS) main.obj shapes.obj

main.obj: main.cpp
	$(CC) $(CFLAGS) main.cpp

shapes.obj: shapes.cpp shapes.h
	$(CC) $(CFLAGS) shapes.cpp

linecount:
	wc -l *.cpp *.h

clean:
	$(RM) *.exe *.obj
