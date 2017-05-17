#include <SQLiteCpp/Backup.h>
#include <SQLiteCpp/Database.h>
#include <SQLiteCpp/Statement.h>
#include <SQLiteCpp/Exception.h>

#include <iostream>

int main () {
	try
	{
		// Open a database file
		SQLite::Database    db("test.db");

		// Compile a SQL query, containing one parameter (index 1)
		SQLite::Statement   query(db, "SELECT * FROM barang WHERE harga > ?");

		// Bind the integer value 6 to the first parameter of the SQL query
		query.bind(1, 4000);

		// Loop to execute the query step by step, to get rows of result
		while (query.executeStep())
		{
			// Demonstrate how to get some typed column value
			int         id      = query.getColumn(0);
			const char* nama   = query.getColumn(1);
			int         harga    = query.getColumn(2);

			std::cout << "row: " << id << ", " << nama << ", " << harga << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
}
