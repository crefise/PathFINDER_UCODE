FLAG	=	-fsanitize=address -g #-std=c11 -Wall -Wextra -Werror -Wpedantic

LIB_FLAG	=	-I libmx/inc/ -L libmx -lmx -o pathfinder

FILE = src/*.c

TEXTFILE = testfile.txt
all: compile compile

compile:
	@clang $(FILE) $(FLAG) $(LIB_FLAG)
	@printf "\033[32;1m\tCOMPILE SUCCESS\033[0m\n"
test: compile for_test

for_test:
	@./pathfinder $(TEXTFILE)
	@rm ./pathfinder

start: compile
	@./pathfinder
