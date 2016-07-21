# 'make depend' uses makedepend to automatically generate dependencies 
# (dependencies are added to end of Makefile)
# 'make'        build executable file 'mycc'
# 'make clean'  removes all .o and executable files

# define the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall


# define any directories containing header files other than /usr/include
# INCLUDES = -I/home/newhall/include  -I../include

# define library paths in addition to /usr/lib
# if I wanted to include libraries not in /usr/lib I'd specify
# their path using -Lpath, something like:
# LFLAGS = -L/home/newhall/lib  -L../lib

# define any libraries to link into executable:
# if I want to link in libraries (libx.so or libx.a) I use the -llibname 
# option, something like (this will link in libmylib.so and libm.so:
#LIBS = -lmylib -lm


# define the C object files 
# This uses Suffix Replacement within a macro:
# $(name:string1=string2)
# For each word in 'name' replace 'string1' with 'string2'
# Below we are replacing the suffix .c of all words in the macro SRCS
# with the .o suffix 
OBJS = $(SRCS:.c=.o)

# the build target executable:
TARGET = myprogram

# define the C source files
SRCS = debug.c main.c printhello.c computation.c printsizeof.c printstring.c sumofseq.c multiplicationTable.c
# helloworld.c printhello.c computation.c

.PHONY: depend clean

all:$(TARGET)
	@echo  Simple compiler named myprogram has been compiled

$(TARGET):$(OBJS) 
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# $(MAIN): $(OBJS)
# $(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)
# this is a suffix replacement rule for building .o's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# (see the gnu make manual section about automatic variables)
.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(TARGET)
#	$(RM) *.o *~ $(TARGET)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
