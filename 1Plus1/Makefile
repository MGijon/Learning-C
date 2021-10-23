IDIR =./include
CC=gcc
CFLAGS=-I $(IDIR)

ODIR=obj
LDIR =./lib

LIBS=-lm

_DEPS = functions.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o functions.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: lib/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean
clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
	rm main
	@echo "** Deleted all files **"

.PHONY: soft_clean
soft_clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
	@echo "** Deleted .o files **"
