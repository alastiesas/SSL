CFLAGS = -std=c11 -Wall -Wmissing-prototypes
BIN = TablasDeConversion
TEST = ConversionTest
SRC = TablasDeConversion.c ConversionTest.c Conversion.c Conversion.h
OBJ = Conversion.o
RM = rm -f

.PHONY: all clean run test
all: test run
run: $(BIN)
	 ./$(BIN)
clean: 
	$(RM) $(OBJ) $(BIN) $(TEST)
test: $(TEST)
	./$(TEST)

$(BIN): Conversion.o
$(TEST): Conversion.o
Conversion.o: Conversion.h