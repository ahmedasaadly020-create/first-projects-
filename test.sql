CREATE DATABASE test3;
USE test3;
GO
CREATE SCHEMA test4;
GO
CREATE SCHEMA test9;
GO
CREATE TABLE test3.test1.test_table(
    id int NOT NULL PRIMARY KEY,
    first_name NVARCHAR(10) NOT NULL,
    last_name NVARCHAR(10) NOT NULL,
    phon VARCHAR(20),
    email VARCHAR(50),
    adress NVARCHAR(70)
);
