NAME = rush-02
SRCDIR = src/
ODIR = obj/
IDIR = inc/
DDIR = dep/
SRC = $(wildcard $(SRCDIR)*.c)

CC = cc
CFLAGS = -Wall -Wextra -Werror

DEBUG ?= 0
ifeq ($(DEBUG), 1)
	CFLAGS += -g -O0
endif

OBJ = $(SRC:$(SRCDIR)%=$(ODIR)%.o)
DEP = $(SRC:$(SRCDIR)%=$(DDIR)%.d)

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

$(DDIR):
	@mkdir $@

$(DEP): | $(DDIR)

$(DEP): $(DDIR)%.d: $(SRCDIR)%
	$(CC) $(CFLAGS) -MM -MF $@ -MT "$(ODIR)$*.o $@" $<

$(NAME): $(OBJ)
	$(CC) $^ -o $@

cleanobj:
	$(RM) $(wildcard $(OBJ))

cleanobjdir: cleanobj
	$(RMDIR) $(ODIR)

cleandep:
	$(RM) $(wildcard $(DEP))

cleandepdir: cleandep
	$(RMDIR) $(DDIR)

clean: cleanobjdir cleandepdir

fclean: clean
	$(RM) $(NAME)

re: fclean all
