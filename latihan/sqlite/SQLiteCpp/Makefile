OBJECTS = backup.o column.o database.o statement.o transaction.o

all: $(OBJECTS)

backup.o: Backup.cpp Backup.h
	g++ -c $< -o $@
column.o: Column.cpp Column.h
	g++ -c $< -o $@
database.o:Database.cpp Database.h
	g++ -c $< -o $@
statement.o: Statement.cpp Statement.h
	g++ -c $< -o $@
transaction.o: Transaction.cpp Transaction.h
	g++ -c $< -o $@
