# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2021/2
# Prof. Marcelo Luiz Drumond Lanza
# Autor: <nome completo>
# Descricao: Arquivo de dependencias para Linux

# $Author$
# $Date$
# $Log$

OS = $(shell uname -s)

CC = gcc

ifeq ($(cc), CLANG)
CC = clang
endif

LD = $(CC)

DIALETO = ansi
STANDARD = -ansi

ifeq ($(dialeto), C89)
DIALETO = c89
STANDARD = -std=c89
endif

ifeq ($(dialeto), C90)
DIALETO = c90
STANDARD = -std=c90
endif

ifeq ($(dialeto), C99)
DIALETO = c99
STANDARD = -std=c99
endif

ifeq ($(dialeto), C11)
DIALETO = c11
STANDARD = -std=c11
endif

CFLAGS = -Wall $(STANDARD)
LFLAGS = -Wall

# \/ OBJS MACROS\/ --------------------------------------------------------------------------------
# -- Roteiro 1 \/ ---------------------------------------------------------------------------------
AULA01 = aula0101 aula0102 aula0103

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
# -- Roteiro 1 /\ ---------------------------------------------------------------------------------

# -- Roteiro 2 \/ ---------------------------------------------------------------------------------
AULA02 = aula0202a aula0202b aula0202c aula0202d

AULA0202AOBJS = aula0201a.o aula0202.o
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o
# -- Roteiro 2 /\ ---------------------------------------------------------------------------------

# -- Roteiro 3 \/ ---------------------------------------------------------------------------------
AULA03 = aula0302a aula0302b aula0302c aula0302d

AULA0302AOBJS = aula0301a.o aula0302.o
AULA0302BOBJS = aula0301b.o aula0302.o
AULA0302COBJS = aula0301c.o aula0302.o
AULA0302DOBJS = aula0301d.o aula0302.o
# -- Roteiro 3 /\ ---------------------------------------------------------------------------------

# -- Roteiro 4 \/ ---------------------------------------------------------------------------------
AULA04 = aula0402a aula0402b aula0402c aula0402d aula0404a aula0404b aula0404c aula0404d aula0404e

AULA0402AOBJS = aula0401a.o aula0402.o
AULA0402BOBJS = aula0401b.o aula0402.o
AULA0402COBJS = aula0401c.o aula0402.o
AULA0402DOBJS = aula0401d.o aula0402.o

AULA0404AOBJS = aula0403a.o aula0404.o libmatematicarecursao.a
AULA0404BOBJS = aula0403b.o aula0404.o libmatematicadowhile.a
AULA0404COBJS = aula0403c.o aula0404.o libmatematicafor.a
AULA0404DOBJS = aula0403d.o aula0404.o libmatematicawhile.a

AULA0404EOBJS = aula0403e.o aula0404.o libmatematicafor.a
# -- Roteiro 4 /\ ---------------------------------------------------------------------------------

# -- Roteiro 5 \/ ---------------------------------------------------------------------------------
AULA05 = aula0502a aula0502b aula0503a aula0503b aula0505a aula0505b aula0506a aula0506b

AULA0502AOBJS = aula0501.o aula0502a.o
AULA0502BOBJS = aula0501.o aula0502b.o
AULA0503AOBJS = aula0501.o aula0503a.o
AULA0503BOBJS = aula0501.o aula0503b.o

AULA0505AOBJS = aula0504.o aula0505a.o
AULA0505BOBJS = aula0504.o aula0505b.o
AULA0506AOBJS = aula0504.o aula0506a.o
AULA0506BOBJS = aula0504.o aula0506b.o
# -- Roteiro 5 /\ ---------------------------------------------------------------------------------

# -- Roteiro 6 \/ ---------------------------------------------------------------------------------
AULA06 = aula0602 aula0603 aula0604 aula0605 aula0606

AULA0602OBJS = aula0601.o aula0602.o
AULA0603OBJS = aula0601.o aula0603.o
AULA0604OBJS = aula0601.o aula0604.o
AULA0605OBJS = aula0601.o aula0605.o
AULA0606OBJS = aula0601.o aula0606.o
# -- Roteiro 6 /\ ---------------------------------------------------------------------------------

# -- Roteiro 7 \/ ---------------------------------------------------------------------------------
AULA07 = aula0702 aula0703 aula0704 aula0705 aula0706

AULA0702OBJS = aula0701.o aula0702.o
AULA0703OBJS = aula0701.o aula0703.o libmonitor.a
AULA0704OBJS = aula0701.o aula0704.o libmonitor.a
AULA0705OBJS = aula0701.o aula0705.o libmonitor.a
AULA0706OBJS = aula0701.o aula0706.o libmonitor.a
# -- Roteiro 7 /\ ---------------------------------------------------------------------------------

# -- Roteiro 8 \/ ---------------------------------------------------------------------------------
AULA08 = aula0802 aula0803 aula0804 aula0805 aula0806 aula0807 aula0808 aula0809

AULA0802OBJS = aula0801.o aula0802.o
AULA0803OBJS = aula0801.o aula0803.o libbase.a
AULA0804OBJS = aula0801.o aula0804.o libbase.a
AULA0805OBJS = aula0801.o aula0805.o libbase.a
AULA0806OBJS = aula0801.o aula0806.o libbase.a
AULA0807OBJS = aula0801.o aula0807.o libbase.a
AULA0808OBJS = aula0801.o aula0808.o libbase.a
AULA0809OBJS = aula0801.o aula0809.o libbase.a
# -- Roteiro 8 /\ ---------------------------------------------------------------------------------
# /\ OBJS MACROS/\ --------------------------------------------------------------------------------


# \/ LIBS MACROS\/ --------------------------------------------------------------------------------
# -- Roteiros 2 - 3 - 4 \/ ------------------------------------------------------------------------
LIBMATEMATICARECURSAOOBJS = aula0201a.o aula0301a.o aula0401a.o aula0403a.o
LIBMATEMATICADOWHILEOBJS = aula0201b.o aula0301b.o aula0401b.o aula0403b.o
LIBMATEMATICAFOROBJS = aula0201c.o aula0301c.o aula0401c.o aula0403c.o
LIBMATEMATICAWHILEOBJS = aula0201d.o aula0301d.o aula0401d.o aula0403d.o
# -- Roteiro 2 - 3 - 4 /\ ------------------------------------------------------------------------

# -- Roteiro 6 \/ ---------------------------------------------------------------------------------
LIBMATEMATICAOBJS = aula0601.o
LIBMATEMATICA = libmatematica.a
# -- Roteiro 6 /\ ---------------------------------------------------------------------------------

# -- Roteiro 7 \/ ---------------------------------------------------------------------------------
LIBMONITOROBJS = aula0701.o
LIBMONITOR = libmonitor.a
# -- Roteiro 7 /\ ---------------------------------------------------------------------------------

# -- Roteiro 8 \/ ---------------------------------------------------------------------------------
LIBBASEOBJS = aula0801.o
LIBBASE = libbase.a
# -- Roteiro 8 /\ ---------------------------------------------------------------------------------
# /\ LIBS MACROS/\ --------------------------------------------------------------------------------



EXECS = aula0101\
		aula0102\
		aula0103\
		aula0202a\
		aula0202b\
		aula0202c\
		aula0202d\
		aula0302a\
		aula0302b\
		aula0302c\
		aula0302d\
		aula0402a\
		aula0402b\
		aula0402c\
		aula0402d\
		aula0404a\
		aula0404b\
		aula0404c\
		aula0404d\
		aula0404e\
		aula0502a\
		aula0502b\
		aula0503a\
		aula0503b\
		aula0505a\
		aula0505b\
		aula0506a\
		aula0506b\
		aula0602\
		aula0603\
		aula0604\
		aula0605\
		aula0606\
		aula0702\
		aula0703\
		aula0704\
		aula0705\
		aula0706\
		aula0802\
		aula0803\
		aula0804\
		aula0805\
		aula0806\
		aula0807\
		aula0808\
		aula0809


LIBS =	libmatematicarecursao.a\
	libmatematicadowhile.a\
	libmatematicafor.a\
	libmatematicawhile.a\
	libmonitor.a\
	libbase.a\
	libmatematica.a\
	libmonitor.a\
	libbase.a

ALL = $(EXECS) $(LIBS)

# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL)

# -- Roteiro 1 \/ ----------------------------------------------------------------------------------
aula01: $(AULA01)

aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 1 /\ ---------------------------------------------------------------------------------


# -- Roteiro 2 \/ ----------------------------------------------------------------------------------
aula02: $(AULA02)

aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)


libmatematicarecursao.a: $(LIBMATEMATICARECURSAOOBJS)
	ar -r -c $@ $(LIBMATEMATICARECURSAOOBJS)

libmatematicadowhile.a: $(LIBMATEMATICADOWHILEOBJS)
	ar -r -c $@ $(LIBMATEMATICADOWHILEOBJS)

libmatematicafor.a: $(LIBMATEMATICAFOROBJS)
	ar -r -c $@ $(LIBMATEMATICAFOROBJS)

libmatematicawhile.a: $(LIBMATEMATICAWHILEOBJS)
	ar -r -c $@ $(LIBMATEMATICAWHILEOBJS)
# -- Roteiro 2 /\ ---------------------------------------------------------------------------------


# -- Roteiro 3 \/ ----------------------------------------------------------------------------------
aula03: $(AULA03)

aula0302a: $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0302b: $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0302c: $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0302d: $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 3 /\ ---------------------------------------------------------------------------------


# -- Roteiro 4 \/ ----------------------------------------------------------------------------------
aula04: $(AULA04)

aula0402a: $(AULA0402AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0402b: $(AULA0402BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0402c: $(AULA0402COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402COBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0402d: $(AULA0402DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402DOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)


aula0404a: $(AULA0404AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404AOBJS) -L. -lmatematicarecursao
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0404b: $(AULA0404BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404BOBJS) -L. -lmatematicadowhile
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0404c: $(AULA0404COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404COBJS) -L. -lmatematicafor
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0404d: $(AULA0404DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404DOBJS) -L. -lmatematicawhile
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)


aula0404e: $(AULA0404EOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404EOBJS) -lm
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 4 /\ ---------------------------------------------------------------------------------


# -- Roteiro 5 \/ ----------------------------------------------------------------------------------
aula05: $(AULA05)

aula0502a: $(AULA0502AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0502b: $(AULA0502BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0503a: $(AULA0503AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0503AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0503b: $(AULA0503BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0503BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)


aula0505a: $(AULA0505AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0505AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0505b: $(AULA0505BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0505BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0506a: $(AULA0506AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0506AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0506b: $(AULA0506BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0506BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 5 /\ ----------------------------------------------------------------------------------


# -- Roteiro 6 \/ ----------------------------------------------------------------------------------
aula06: $(AULA06)

aula0602: $(AULA0602OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

libmatematica.a: $(LIBMATEMATICAOBJS)
	ar -r -c $@ $(LIBMATEMATICAOBJS)

aula0603: $(AULA0603OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0603OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0604: $(AULA0604OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0604OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0605: $(AULA0605OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0605OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0606: $(AULA0606OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0606OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 6 /\ ----------------------------------------------------------------------------------

# -- Roteiro 7 \/ ----------------------------------------------------------------------------------
aula07: $(AULA07)

libmonitor.a: $(LIBMONITOROBJS)
	ar -r -c $@ $(LIBMONITOROBJS)

aula0702: $(AULA0702OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0702OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0703: $(AULA0703OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0703OBJS) -L. -lmonitor
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0704: $(AULA0704OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0704OBJS) -L. -lmonitor
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0705: $(AULA0705OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0705OBJS) -L. -lmonitor
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0706: $(AULA0706OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0706OBJS) -L. -lmonitor
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 7 /\ ----------------------------------------------------------------------------------

# -- Roteiro 8 \/ ----------------------------------------------------------------------------------
aula08: $(AULA08)

libbase.a: $(LIBBASEOBJS)
	ar -r -c $@ $(LIBBASEOBJS)

aula0802: $(AULA0802OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0803: $(AULA0803OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0803OBJS) -L. -lbase
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0804: $(AULA0804OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0804OBJS) -L. -lbase
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0805: $(AULA0805OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0805OBJS) -L. -lbase
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0806: $(AULA0806OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0806OBJS) -L. -lbase
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0807: $(AULA0807OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0807OBJS) -L. -lbase
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0808: $(AULA0808OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0808OBJS) -L. -lbase
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0809: $(AULA0809OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0809OBJS) -L. -lbase
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 8 /\ ----------------------------------------------------------------------------------


.PHONY: clean clean-all clean-objs clean-freebsd clean-linux clean-gcc clean-clang clean-ansi clean-c89 clean-c90 clean-c99 clean-c11

clean:
	rm -f *.o $(ALL) *.core

clean-all:
	rm -f *.o $(ALL) *-FreeBSD-* *-Linux-* *.core

clean-objs:
	rm -f *.o *.core

clean-freebsd:
	rm -f *.o $(ALL) *-FreeBSD-* *.core

clean-linux:
	rm -f *.o $(ALL) *-Linux-* *.core

clean-gcc:
	rm -f *.o $(ALL) *-gcc-* *.core

clean-clang:
	rm -f *.o $(ALL) *-clang-* *.core

clean-ansi:
	rm -f *.o $(ALL) *-ansi *.core

clean-c89:
	rm -f *.o $(ALL) *-c89 *.core

clean-c90:
	rm -f *.o $(ALL) *-c90 *.core

clean-c99:
	rm -f *.o $(ALL) *-c99 *.core

clean-c11:
	rm -f *.o $(ALL) *-c11 *.core

# $RCSfile$