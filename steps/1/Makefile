CC = cl.exe
CFLAGS = /EHsc /c
LINK = link.exe
LDFLAGS = 
RM = rm -rf
SHELL = cmd.exe
.PHONY = all clean

all: main.exe

main.exe: main.obj
	$(LINK) $(LDFLAGS) main.obj

main.obj: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	$(RM) *.exe *.obj
