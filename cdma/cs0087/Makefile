DIR_INC = ./Inc
DIR_SRC = ./Src
DIR_OBJ = ./obj
DIR_BIN = ./bin

SRC = $(wildcard ${DIR_SRC}/*.c)  
OBJ = $(patsubst %.c,${DIR_OBJ}/%.o,$(notdir ${SRC})) 

TARGET = r9

BIN_TARGET = ${DIR_BIN}/${TARGET}

CC = gcc
CFLAGS = -g -Wall -I${DIR_INC}

.PHONY:all
all:${BIN_TARGET}

${BIN_TARGET}:${OBJ}
	$(CC) $(OBJ) -o $@
    
${DIR_OBJ}/%.o:${DIR_SRC}/%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY:env
env:
	mkdir -p ${DIR_OBJ}
	mkdir -p ${DIR_BIN}

.PHONY:clean
clean:
	rm -rf ${DIR_OBJ} ${DIR_BIN}
