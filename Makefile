CC = cl.exe
RM = rm -rf
SHELL = cmd.exe
.PHONY = all clean

all:
	$(CC) /EHsc *.cpp

clean:
	$(RM) *.obj *.exe
