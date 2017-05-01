CC = gcc
CFLAGS = 
LDFLAGS = 

OBJS =bintree.o treenode.o

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) sorter
