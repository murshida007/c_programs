USE BOOKS;
CREATE TABLE PRODUCTS(PRODUCTID INT PRIMARY KEY,PRODUCTNAME VARCHAR(50),PRICE DOUBLE,QUANTITY INT NOT NULL);
DESCRIBE PRODUCTS;
INSERT INTO PRODUCTS VALUES(1,"APPLE",3.50,100),(2,"ORANGE",2.00,150),(3,"BANANA",1.20,200),(4,"MANGO",2.50,50),(5,"GRAPE",4.00,80);
SELECT * FROM PRODUCTS;
SELECT SUM(QUANTITY)FROM PRODUCTS;
SELECT MAX(PRICE) FROM PRODUCTS;
SELECT AVG(PRICE) FROM PRODUCTS;
ALTER TABLE PRODUCTS ADD (TOTAL INT);
DESCRIBE PRODUCTS;
SELECT * FROM PRODUCTS;
SELECT SUM(QUANTITY*PRICE) AS TOTAL FROM PRODUCTS GROUP BY PRODUCTNAME;

