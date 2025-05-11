NAME = bsq
SRCDIR = src/
ODIR = obj/
IDIR = inc/
SRC = $(wildcard $(SRCDIR)*.c)

CC = cc
CFLAGS = -Wall -Wextra -Werror

DEBUG ?= 0
ifeq ($(DEBUG), 1)
	CFLAGS += -g2 -O0
endif

OBJ = $(SRC:$(SRCDIR)%=$(ODIR)%.o)

RM = rm -f
RMDIR = rm -rf
.PHONY: all clean fclean


all: $(NAME)

$(NAME): $(OBJ)

$(ODIR):
	@mkdir -p $@

$(OBJ): | $(ODIR)

$(OBJ): $(ODIR)%.o: $(SRCDIR)%
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $^ -o $@

cleanobj:
	$(RM) $(wildcard $(OBJ))

cleanobjdir: cleanobj
	$(RMDIR) $(ODIR)

clean: cleanobjdir

fclean: clean
	$(RM) $(NAME)

re: fclean all
