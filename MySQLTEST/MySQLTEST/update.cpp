#include <stdlib.h>
#include <iostream>

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>
using namespace std;

//for demonstration only. never save your password in the code!
const string server = "tcp://127.0.0.1:3306"; // �����ͺ��̽� �ּ�
const string username = "user"; // �����ͺ��̽� �����
const string password = "1234"; // �����ͺ��̽� ���� ��й�ȣ
int main()
{
	sql::Driver* driver;
	sql::Connection* con;
	sql::PreparedStatement* pstmt;

	try
	{
		driver = get_driver_instance();
		//for demonstration only. never save password in the code!
		con = driver->connect(server, username, password);
	}
	catch (sql::SQLException e)
	{
		cout << "Could not connect to server. Error message: " << e.what() << endl;
		system("pause");
		exit(1);
	}

	con->setSchema("cpp_db");

	//update
	pstmt = con->prepareStatement("UPDATE departments SET department_name = ? WHERE department_id = ?");
	pstmt->setString(1, "S/W Developer");
	pstmt->setInt(2, 5);
	pstmt->executeQuery();
	printf("Row updated\n");

	pstmt = con->prepareStatement("UPDATE departments SET location_id = ? WHERE department_id = ?");
	pstmt->setString(1, "Silicon Valley");
	pstmt->setInt(2, 5);
	pstmt->executeQuery();
	printf("Row updated\n");
	/*
	//update
	pstmt = con->prepareStatement("UPDATE departments SET department_name = ? WHERE department_id = ?");
	pstmt->setString(5, "S/W Developer");
	pstmt->executeQuery();
	printf("Row updated\n");

	//update
	pstmt = con->prepareStatement("UPDATE departments SET location = ? WHERE department_id = ?");
	pstmt->setString(5, "Silicon Valley");
	pstmt->executeQuery();
	printf("Row updated\n");
	*/

	delete con;
	delete pstmt;
	system("pause");
	return 0;
}