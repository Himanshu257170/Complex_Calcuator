PROJECT_NAME=Complex_calculator
SRC=complex.c\
test_complex_calculator.c

INC=unity

TEST=unity/unity.c

$(PROJECT_NAME).exe :$(SRC) $(TEST)
	gcc -I $(INC) $(SRC) $(TEST) -o $(PROJECT_NAME).exe

run: $(PROJECT_NAME)
		$(PROJECT_NAME)
	
clean:
	del /q *.exe