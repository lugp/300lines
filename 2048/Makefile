TARGET = 2048
CC = gcc
CFLAGS = -g

SRCFILES = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, ${SRCFILES})

${TARGET} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${TARGET}

%.o : %.c
	${CC} ${CFLAGS} -c $<

clean:
	@echo "rm project..."
	-rm -rf ${TARGET} *.o
	@echo "rm complete..."

.PHONY:clean
