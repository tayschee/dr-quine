COLLEEN_SRC=Colleen.asm
GRACE_SRC=Grace.asm
SULLY_SRC=Sully.asm

COLLEEN_OBJ=Colleen.o
GRACE_OBJ=Grace.o
SULLY_OBJ=Sully.o

COLLEEN_EXE=Colleen
GRACE_EXE=Grace
SULLY_EXE=Sully

COLLEEN_CLEAN=clean_${COLLEEN_EXE}
GRACE_CLEAN=clean_${GRACE_EXE}
SULLY_CLEAN=clean_${SULLY_EXE}

COLLEEN_FCLEAN=fclean_${COLLEEN_EXE}
GRACE_FCLEAN=fclean_${GRACE_EXE}
SULLY_FCLEAN=fclean_${SULLY_EXE}

COLLEEN_RE=re_${COLLEEN_EXE}
GRACE_RE=re_${GRACE_EXE}
SULLY_RE=re_${SULLY_EXE}

AS=nasm
ASFLAGS=-f elf64

######################################### DEFAULT RULE ########################################
all: ${COLLEEN_EXE} ${GRACE_EXE} ${SULLY_EXE}

clean: ${COLLEEN_CLEAN} ${GRACE_CLEAN} ${SULLY_CLEAN}

fclean: ${COLLEEN_FCLEAN} ${GRACE_FCLEAN} ${SULLY_FCLEAN}

re: ${COLLEEN_RE} ${GRACE_RE} ${SULLY_RE}

###################################### COLLEEN ##############################################
${COLLEEN_EXE}: ${COLLEEN_OBJ}
	gcc -no-pie -o ${COLLEEN_EXE} ${COLLEEN_OBJ}

${COLLEEN_CLEAN}:
	rm -f ${COLLEEN_OBJ}

${COLLEEN_FCLEAN}: ${COLLEEN_CLEAN}
	rm -f ${COLLEEN_EXE}

${COLLEEN_RE}: ${COLLEEN_FCLEAN} ${COLLEEN_EXE}

########################################### GRACE ##########################################
${GRACE_EXE}: ${GRACE_OBJ}
	gcc -o ${GRACE_EXE} ${GRACE_OBJ}

${GRACE_CLEAN}:
	rm -f ${GRACE_OBJ}
	rm -f Grace_kid.asm

${GRACE_FCLEAN}: ${GRACE_CLEAN}
	rm -f ${GRACE_EXE}

${GRACE_RE}: ${GRACE_FCLEAN} ${GRACE_EXE}

########################################## SULLY ##########################################
${SULLY_EXE}: ${SULLY_OBJ}
	ld -o ${SULLY_EXE} ${SULLY_OBJ}

${SULLY_CLEAN}:
	rm -f ${SULLY_OBJ}
	rm -f Sully_*

${SULLY_FCLEAN}: ${SULLY_CLEAN}
	rm -f ${SULLY_EXE}

${SULLY_RE}: ${SULLY_CLEAN} ${SULLY_EXE}

	

.PHONY: all clean fclean re