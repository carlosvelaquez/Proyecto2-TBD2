-- ----------------------------------------------------------------------------
-- MySQL Workbench Migration
-- Migrated Schemata: Northwind
-- Source Schemata: Northwind
-- Created: Sat Dec 15 11:11:04 2018
-- Workbench Version: 8.0.13
-- ----------------------------------------------------------------------------

SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------------------------------------------------------
-- Schema Northwind
-- ----------------------------------------------------------------------------
DROP SCHEMA IF EXISTS `Northwind` ;
CREATE SCHEMA IF NOT EXISTS `Northwind` ;

-- ----------------------------------------------------------------------------
-- Table Northwind.Employees
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Employees` (
  `EmployeeID` INT NOT NULL AUTO_INCREMENT,
  `LastName` VARCHAR(20) CHARACTER SET 'utf8mb4' NOT NULL,
  `FirstName` VARCHAR(10) CHARACTER SET 'utf8mb4' NOT NULL,
  `Title` VARCHAR(30) CHARACTER SET 'utf8mb4' NULL,
  `TitleOfCourtesy` VARCHAR(25) CHARACTER SET 'utf8mb4' NULL,
  `BirthDate` DATETIME(6) NULL,
  `HireDate` DATETIME(6) NULL,
  `Address` VARCHAR(60) CHARACTER SET 'utf8mb4' NULL,
  `City` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `Region` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `PostalCode` VARCHAR(10) CHARACTER SET 'utf8mb4' NULL,
  `Country` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `HomePhone` VARCHAR(24) CHARACTER SET 'utf8mb4' NULL,
  `Extension` VARCHAR(4) CHARACTER SET 'utf8mb4' NULL,
  `Photo` LONGBLOB NULL,
  `Notes` LONGTEXT NULL,
  `ReportsTo` INT NULL,
  `PhotoPath` VARCHAR(255) CHARACTER SET 'utf8mb4' NULL,
  PRIMARY KEY (`EmployeeID`),
  INDEX `LastName` (`LastName` ASC),
  INDEX `PostalCode` (`PostalCode` ASC),
  CONSTRAINT `FK_Employees_Employees`
    FOREIGN KEY (`ReportsTo`)
    REFERENCES `Northwind`.`Employees` (`EmployeeID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- ----------------------------------------------------------------------------
-- Table Northwind.Categories
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Categories` (
  `CategoryID` INT NOT NULL AUTO_INCREMENT,
  `CategoryName` VARCHAR(15) CHARACTER SET 'utf8mb4' NOT NULL,
  `Description` LONGTEXT NULL,
  `Picture` LONGBLOB NULL,
  PRIMARY KEY (`CategoryID`),
  INDEX `CategoryName` (`CategoryName` ASC));

-- ----------------------------------------------------------------------------
-- Table Northwind.Customers
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Customers` (
  `CustomerID` CHAR(5) CHARACTER SET 'utf8mb4' NOT NULL,
  `CompanyName` VARCHAR(40) CHARACTER SET 'utf8mb4' NOT NULL,
  `ContactName` VARCHAR(30) CHARACTER SET 'utf8mb4' NULL,
  `ContactTitle` VARCHAR(30) CHARACTER SET 'utf8mb4' NULL,
  `Address` VARCHAR(60) CHARACTER SET 'utf8mb4' NULL,
  `City` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `Region` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `PostalCode` VARCHAR(10) CHARACTER SET 'utf8mb4' NULL,
  `Country` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `Phone` VARCHAR(24) CHARACTER SET 'utf8mb4' NULL,
  `Fax` VARCHAR(24) CHARACTER SET 'utf8mb4' NULL,
  PRIMARY KEY (`CustomerID`),
  INDEX `City` (`City` ASC),
  INDEX `CompanyName` (`CompanyName` ASC),
  INDEX `PostalCode` (`PostalCode` ASC),
  INDEX `Region` (`Region` ASC));

-- ----------------------------------------------------------------------------
-- Table Northwind.Shippers
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Shippers` (
  `ShipperID` INT NOT NULL AUTO_INCREMENT,
  `CompanyName` VARCHAR(40) CHARACTER SET 'utf8mb4' NOT NULL,
  `Phone` VARCHAR(24) CHARACTER SET 'utf8mb4' NULL,
  PRIMARY KEY (`ShipperID`));

-- ----------------------------------------------------------------------------
-- Table Northwind.Suppliers
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Suppliers` (
  `SupplierID` INT NOT NULL AUTO_INCREMENT,
  `CompanyName` VARCHAR(40) CHARACTER SET 'utf8mb4' NOT NULL,
  `ContactName` VARCHAR(30) CHARACTER SET 'utf8mb4' NULL,
  `ContactTitle` VARCHAR(30) CHARACTER SET 'utf8mb4' NULL,
  `Address` VARCHAR(60) CHARACTER SET 'utf8mb4' NULL,
  `City` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `Region` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `PostalCode` VARCHAR(10) CHARACTER SET 'utf8mb4' NULL,
  `Country` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `Phone` VARCHAR(24) CHARACTER SET 'utf8mb4' NULL,
  `Fax` VARCHAR(24) CHARACTER SET 'utf8mb4' NULL,
  `HomePage` LONGTEXT NULL,
  PRIMARY KEY (`SupplierID`),
  INDEX `CompanyName` (`CompanyName` ASC),
  INDEX `PostalCode` (`PostalCode` ASC));

-- ----------------------------------------------------------------------------
-- Table Northwind.Orders
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Orders` (
  `OrderID` INT NOT NULL AUTO_INCREMENT,
  `CustomerID` CHAR(5) CHARACTER SET 'utf8mb4' NULL,
  `EmployeeID` INT NULL,
  `OrderDate` DATETIME(6) NULL,
  `RequiredDate` DATETIME(6) NULL,
  `ShippedDate` DATETIME(6) NULL,
  `ShipVia` INT NULL,
  `Freight` DECIMAL(19,4) NULL DEFAULT 0,
  `ShipName` VARCHAR(40) CHARACTER SET 'utf8mb4' NULL,
  `ShipAddress` VARCHAR(60) CHARACTER SET 'utf8mb4' NULL,
  `ShipCity` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `ShipRegion` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  `ShipPostalCode` VARCHAR(10) CHARACTER SET 'utf8mb4' NULL,
  `ShipCountry` VARCHAR(15) CHARACTER SET 'utf8mb4' NULL,
  PRIMARY KEY (`OrderID`),
  INDEX `CustomerID` (`CustomerID` ASC),
  INDEX `CustomersOrders` (`CustomerID` ASC),
  INDEX `EmployeeID` (`EmployeeID` ASC),
  INDEX `EmployeesOrders` (`EmployeeID` ASC),
  INDEX `OrderDate` (`OrderDate` ASC),
  INDEX `ShippedDate` (`ShippedDate` ASC),
  INDEX `ShippersOrders` (`ShipVia` ASC),
  INDEX `ShipPostalCode` (`ShipPostalCode` ASC),
  CONSTRAINT `FK_Orders_Customers`
    FOREIGN KEY (`CustomerID`)
    REFERENCES `Northwind`.`Customers` (`CustomerID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `FK_Orders_Employees`
    FOREIGN KEY (`EmployeeID`)
    REFERENCES `Northwind`.`Employees` (`EmployeeID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `FK_Orders_Shippers`
    FOREIGN KEY (`ShipVia`)
    REFERENCES `Northwind`.`Shippers` (`ShipperID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- ----------------------------------------------------------------------------
-- Table Northwind.Products
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Products` (
  `ProductID` INT NOT NULL AUTO_INCREMENT,
  `ProductName` VARCHAR(40) CHARACTER SET 'utf8mb4' NOT NULL,
  `SupplierID` INT NULL,
  `CategoryID` INT NULL,
  `QuantityPerUnit` VARCHAR(20) CHARACTER SET 'utf8mb4' NULL,
  `UnitPrice` DECIMAL(19,4) NULL DEFAULT 0,
  `UnitsInStock` SMALLINT NULL DEFAULT 0,
  `UnitsOnOrder` SMALLINT NULL DEFAULT 0,
  `ReorderLevel` SMALLINT NULL DEFAULT 0,
  `Discontinued` TINYINT(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ProductID`),
  INDEX `CategoriesProducts` (`CategoryID` ASC),
  INDEX `CategoryID` (`CategoryID` ASC),
  INDEX `ProductName` (`ProductName` ASC),
  INDEX `SupplierID` (`SupplierID` ASC),
  INDEX `SuppliersProducts` (`SupplierID` ASC),
  CONSTRAINT `FK_Products_Categories`
    FOREIGN KEY (`CategoryID`)
    REFERENCES `Northwind`.`Categories` (`CategoryID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `FK_Products_Suppliers`
    FOREIGN KEY (`SupplierID`)
    REFERENCES `Northwind`.`Suppliers` (`SupplierID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- ----------------------------------------------------------------------------
-- Table Northwind.Order Details
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Order Details` (
  `OrderID` INT NOT NULL,
  `ProductID` INT NOT NULL,
  `UnitPrice` DECIMAL(19,4) NOT NULL DEFAULT 0,
  `Quantity` SMALLINT NOT NULL DEFAULT 1,
  `Discount` FLOAT(24,0) NOT NULL DEFAULT 0,
  PRIMARY KEY (`OrderID`, `ProductID`),
  INDEX `OrderID` (`OrderID` ASC),
  INDEX `OrdersOrder_Details` (`OrderID` ASC),
  INDEX `ProductID` (`ProductID` ASC),
  INDEX `ProductsOrder_Details` (`ProductID` ASC),
  CONSTRAINT `FK_Order_Details_Orders`
    FOREIGN KEY (`OrderID`)
    REFERENCES `Northwind`.`Orders` (`OrderID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `FK_Order_Details_Products`
    FOREIGN KEY (`ProductID`)
    REFERENCES `Northwind`.`Products` (`ProductID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- ----------------------------------------------------------------------------
-- Table Northwind.CustomerCustomerDemo
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`CustomerCustomerDemo` (
  `CustomerID` CHAR(5) CHARACTER SET 'utf8mb4' NOT NULL,
  `CustomerTypeID` CHAR(10) CHARACTER SET 'utf8mb4' NOT NULL,
  PRIMARY KEY (`CustomerID`, `CustomerTypeID`),
  CONSTRAINT `FK_CustomerCustomerDemo`
    FOREIGN KEY (`CustomerTypeID`)
    REFERENCES `Northwind`.`CustomerDemographics` (`CustomerTypeID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `FK_CustomerCustomerDemo_Customers`
    FOREIGN KEY (`CustomerID`)
    REFERENCES `Northwind`.`Customers` (`CustomerID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- ----------------------------------------------------------------------------
-- Table Northwind.CustomerDemographics
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`CustomerDemographics` (
  `CustomerTypeID` CHAR(10) CHARACTER SET 'utf8mb4' NOT NULL,
  `CustomerDesc` LONGTEXT NULL,
  PRIMARY KEY (`CustomerTypeID`));

-- ----------------------------------------------------------------------------
-- Table Northwind.Region
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Region` (
  `RegionID` INT NOT NULL,
  `RegionDescription` CHAR(50) CHARACTER SET 'utf8mb4' NOT NULL,
  PRIMARY KEY (`RegionID`));

-- ----------------------------------------------------------------------------
-- Table Northwind.Territories
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`Territories` (
  `TerritoryID` VARCHAR(20) CHARACTER SET 'utf8mb4' NOT NULL,
  `TerritoryDescription` CHAR(50) CHARACTER SET 'utf8mb4' NOT NULL,
  `RegionID` INT NOT NULL,
  PRIMARY KEY (`TerritoryID`),
  CONSTRAINT `FK_Territories_Region`
    FOREIGN KEY (`RegionID`)
    REFERENCES `Northwind`.`Region` (`RegionID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- ----------------------------------------------------------------------------
-- Table Northwind.EmployeeTerritories
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `Northwind`.`EmployeeTerritories` (
  `EmployeeID` INT NOT NULL,
  `TerritoryID` VARCHAR(20) CHARACTER SET 'utf8mb4' NOT NULL,
  PRIMARY KEY (`EmployeeID`, `TerritoryID`),
  CONSTRAINT `FK_EmployeeTerritories_Employees`
    FOREIGN KEY (`EmployeeID`)
    REFERENCES `Northwind`.`Employees` (`EmployeeID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `FK_EmployeeTerritories_Territories`
    FOREIGN KEY (`TerritoryID`)
    REFERENCES `Northwind`.`Territories` (`TerritoryID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- ----------------------------------------------------------------------------
-- View Northwind.Customer and Suppliers by City
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Customer and Suppliers by City" AS
-- SELECT City, CompanyName, ContactName, 'Customers' AS Relationship 
-- FROM Customers
-- UNION SELECT City, CompanyName, ContactName, 'Suppliers'
-- FROM Suppliers
-- --ORDER BY City, CompanyName
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Alphabetical list of products
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Alphabetical list of products" AS
-- SELECT Products.*, Categories.CategoryName
-- FROM Categories INNER JOIN Products ON Categories.CategoryID = Products.CategoryID
-- WHERE (((Products.Discontinued)=0))
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Current Product List
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Current Product List" AS
-- SELECT Product_List.ProductID, Product_List.ProductName
-- FROM Products AS Product_List
-- WHERE (((Product_List.Discontinued)=0))
-- --ORDER BY Product_List.ProductName
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Orders Qry
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Orders Qry" AS
-- SELECT Orders.OrderID, Orders.CustomerID, Orders.EmployeeID, Orders.OrderDate, Orders.RequiredDate, 
-- 	Orders.ShippedDate, Orders.ShipVia, Orders.Freight, Orders.ShipName, Orders.ShipAddress, Orders.ShipCity, 
-- 	Orders.ShipRegion, Orders.ShipPostalCode, Orders.ShipCountry, 
-- 	Customers.CompanyName, Customers.Address, Customers.City, Customers.Region, Customers.PostalCode, Customers.Country
-- FROM Customers INNER JOIN Orders ON Customers.CustomerID = Orders.CustomerID
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Products Above Average Price
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Products Above Average Price" AS
-- SELECT Products.ProductName, Products.UnitPrice
-- FROM Products
-- WHERE Products.UnitPrice>(SELECT AVG(UnitPrice) From Products)
-- --ORDER BY Products.UnitPrice DESC
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Products by Category
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Products by Category" AS
-- SELECT Categories.CategoryName, Products.ProductName, Products.QuantityPerUnit, Products.UnitsInStock, Products.Discontinued
-- FROM Categories INNER JOIN Products ON Categories.CategoryID = Products.CategoryID
-- WHERE Products.Discontinued <> 1
-- --ORDER BY Categories.CategoryName, Products.ProductName
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Quarterly Orders
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Quarterly Orders" AS
-- SELECT DISTINCT Customers.CustomerID, Customers.CompanyName, Customers.City, Customers.Country
-- FROM Customers RIGHT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
-- WHERE Orders.OrderDate BETWEEN '19970101' And '19971231'
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Invoices
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view Invoices AS
-- SELECT Orders.ShipName, Orders.ShipAddress, Orders.ShipCity, Orders.ShipRegion, Orders.ShipPostalCode, 
-- 	Orders.ShipCountry, Orders.CustomerID, Customers.CompanyName AS CustomerName, Customers.Address, Customers.City, 
-- 	Customers.Region, Customers.PostalCode, Customers.Country, 
-- 	(FirstName + ' ' + LastName) AS Salesperson, 
-- 	Orders.OrderID, Orders.OrderDate, Orders.RequiredDate, Orders.ShippedDate, Shippers.CompanyName As ShipperName, 
-- 	"Order Details".ProductID, Products.ProductName, "Order Details".UnitPrice, "Order Details".Quantity, 
-- 	"Order Details".Discount, 
-- 	(CONVERT(money,("Order Details".UnitPrice*Quantity*(1-Discount)/100))*100) AS ExtendedPrice, Orders.Freight
-- FROM 	Shippers INNER JOIN 
-- 		(Products INNER JOIN 
-- 			(
-- 				(Employees INNER JOIN 
-- 					(Customers INNER JOIN Orders ON Customers.CustomerID = Orders.CustomerID) 
-- 				ON Employees.EmployeeID = Orders.EmployeeID) 
-- 			INNER JOIN "Order Details" ON Orders.OrderID = "Order Details".OrderID) 
-- 		ON Products.ProductID = "Order Details".ProductID) 
-- 	ON Shippers.ShipperID = Orders.ShipVia
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Order Details Extended
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Order Details Extended" AS
-- SELECT "Order Details".OrderID, "Order Details".ProductID, Products.ProductName, 
-- 	"Order Details".UnitPrice, "Order Details".Quantity, "Order Details".Discount, 
-- 	(CONVERT(money,("Order Details".UnitPrice*Quantity*(1-Discount)/100))*100) AS ExtendedPrice
-- FROM Products INNER JOIN "Order Details" ON Products.ProductID = "Order Details".ProductID
-- --ORDER BY "Order Details".OrderID
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Order Subtotals
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Order Subtotals" AS
-- SELECT "Order Details".OrderID, Sum(CONVERT(money,("Order Details".UnitPrice*Quantity*(1-Discount)/100))*100) AS Subtotal
-- FROM "Order Details"
-- GROUP BY "Order Details".OrderID
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Product Sales for 1997
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Product Sales for 1997" AS
-- SELECT Categories.CategoryName, Products.ProductName, 
-- Sum(CONVERT(money,("Order Details".UnitPrice*Quantity*(1-Discount)/100))*100) AS ProductSales
-- FROM (Categories INNER JOIN Products ON Categories.CategoryID = Products.CategoryID) 
-- 	INNER JOIN (Orders 
-- 		INNER JOIN "Order Details" ON Orders.OrderID = "Order Details".OrderID) 
-- 	ON Products.ProductID = "Order Details".ProductID
-- WHERE (((Orders.ShippedDate) Between '19970101' And '19971231'))
-- GROUP BY Categories.CategoryName, Products.ProductName
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Category Sales for 1997
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Category Sales for 1997" AS
-- SELECT "Product Sales for 1997".CategoryName, Sum("Product Sales for 1997".ProductSales) AS CategorySales
-- FROM "Product Sales for 1997"
-- GROUP BY "Product Sales for 1997".CategoryName
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Sales by Category
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Sales by Category" AS
-- SELECT Categories.CategoryID, Categories.CategoryName, Products.ProductName, 
-- 	Sum("Order Details Extended".ExtendedPrice) AS ProductSales
-- FROM 	Categories INNER JOIN 
-- 		(Products INNER JOIN 
-- 			(Orders INNER JOIN "Order Details Extended" ON Orders.OrderID = "Order Details Extended".OrderID) 
-- 		ON Products.ProductID = "Order Details Extended".ProductID) 
-- 	ON Categories.CategoryID = Products.CategoryID
-- WHERE Orders.OrderDate BETWEEN '19970101' And '19971231'
-- GROUP BY Categories.CategoryID, Categories.CategoryName, Products.ProductName
-- --ORDER BY Products.ProductName
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Sales Totals by Amount
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Sales Totals by Amount" AS
-- SELECT "Order Subtotals".Subtotal AS SaleAmount, Orders.OrderID, Customers.CompanyName, Orders.ShippedDate
-- FROM 	Customers INNER JOIN 
-- 		(Orders INNER JOIN "Order Subtotals" ON Orders.OrderID = "Order Subtotals".OrderID) 
-- 	ON Customers.CustomerID = Orders.CustomerID
-- WHERE ("Order Subtotals".Subtotal >2500) AND (Orders.ShippedDate BETWEEN '19970101' And '19971231')
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Summary of Sales by Quarter
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Summary of Sales by Quarter" AS
-- SELECT Orders.ShippedDate, Orders.OrderID, "Order Subtotals".Subtotal
-- FROM Orders INNER JOIN "Order Subtotals" ON Orders.OrderID = "Order Subtotals".OrderID
-- WHERE Orders.ShippedDate IS NOT NULL
-- --ORDER BY Orders.ShippedDate
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Summary of Sales by Year
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE view "Summary of Sales by Year" AS
-- SELECT Orders.ShippedDate, Orders.OrderID, "Order Subtotals".Subtotal
-- FROM Orders INNER JOIN "Order Subtotals" ON Orders.OrderID = "Order Subtotals".OrderID
-- WHERE Orders.ShippedDate IS NOT NULL
-- --ORDER BY Orders.ShippedDate
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Ten Most Expensive Products
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE procedure "Ten Most Expensive Products" AS
-- SET ROWCOUNT 10
-- SELECT Products.ProductName AS TenMostExpensiveProducts, Products.UnitPrice
-- FROM Products
-- ORDER BY Products.UnitPrice DESC
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Employee Sales by Country
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE procedure "Employee Sales by Country" 
-- @Beginning_Date DateTime, @Ending_Date DateTime AS
-- SELECT Employees.Country, Employees.LastName, Employees.FirstName, Orders.ShippedDate, Orders.OrderID, "Order Subtotals".Subtotal AS SaleAmount
-- FROM Employees INNER JOIN 
-- 	(Orders INNER JOIN "Order Subtotals" ON Orders.OrderID = "Order Subtotals".OrderID) 
-- 	ON Employees.EmployeeID = Orders.EmployeeID
-- WHERE Orders.ShippedDate Between @Beginning_Date And @Ending_Date
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.Sales by Year
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- create  OR REPLACE procedure "Sales by Year" 
-- 	@Beginning_Date DateTime, @Ending_Date DateTime AS
-- SELECT Orders.ShippedDate, Orders.OrderID, "Order Subtotals".Subtotal, DATENAME(yy,ShippedDate) AS Year
-- FROM Orders INNER JOIN "Order Subtotals" ON Orders.OrderID = "Order Subtotals".OrderID
-- WHERE Orders.ShippedDate Between @Beginning_Date And @Ending_Date
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.CustOrdersDetail
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- CREATE  OR REPLACE PROCEDURE CustOrdersDetail @OrderID int
-- AS
-- SELECT ProductName,
--     UnitPrice=ROUND(Od.UnitPrice, 2),
--     Quantity,
--     Discount=CONVERT(int, Discount * 100), 
--     ExtendedPrice=ROUND(CONVERT(money, Quantity * (1 - Discount) * Od.UnitPrice), 2)
-- FROM Products P, [Order Details] Od
-- WHERE Od.ProductID = P.ProductID and Od.OrderID = @OrderID
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.CustOrdersOrders
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- 
-- CREATE  OR REPLACE PROCEDURE CustOrdersOrders @CustomerID nchar(5)
-- AS
-- SELECT OrderID, 
-- 	OrderDate,
-- 	RequiredDate,
-- 	ShippedDate
-- FROM Orders
-- WHERE CustomerID = @CustomerID
-- ORDER BY OrderID
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.CustOrderHist
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- CREATE  OR REPLACE PROCEDURE CustOrderHist @CustomerID nchar(5)
-- AS
-- SELECT ProductName, Total=SUM(Quantity)
-- FROM Products P, [Order Details] OD, Orders O, Customers C
-- WHERE C.CustomerID = @CustomerID
-- AND C.CustomerID = O.CustomerID AND O.OrderID = OD.OrderID AND OD.ProductID = P.ProductID
-- GROUP BY ProductName
-- ;

-- ----------------------------------------------------------------------------
-- View Northwind.SalesByCategory
-- ----------------------------------------------------------------------------
-- USE `Northwind`;
-- CREATE  OR REPLACE PROCEDURE SalesByCategory
--     @CategoryName nvarchar(15), @OrdYear nvarchar(4) = '1998'
-- AS
-- IF @OrdYear != '1996' AND @OrdYear != '1997' AND @OrdYear != '1998' 
-- BEGIN
-- 	SELECT @OrdYear = '1998'
-- END
-- 
-- SELECT ProductName,
-- 	TotalPurchase=ROUND(SUM(CONVERT(decimal(14,2), OD.Quantity * (1-OD.Discount) * OD.UnitPrice)), 0)
-- FROM [Order Details] OD, Orders O, Products P, Categories C
-- WHERE OD.OrderID = O.OrderID 
-- 	AND OD.ProductID = P.ProductID 
-- 	AND P.CategoryID = C.CategoryID
-- 	AND C.CategoryName = @CategoryName
-- 	AND SUBSTRING(CONVERT(nvarchar(22), O.OrderDate, 111), 1, 4) = @OrdYear
-- GROUP BY ProductName
-- ORDER BY ProductName
-- ;

-- ----------------------------------------------------------------------------
-- Routine Northwind.Ten Most Expensive Products
-- ----------------------------------------------------------------------------
-- DELIMITER $$
-- 
-- DELIMITER $$
-- USE `Northwind`$$
-- 
-- create procedure "Ten Most Expensive Products" AS
-- SET ROWCOUNT 10
-- SELECT Products.ProductName AS TenMostExpensiveProducts, Products.UnitPrice
-- FROM Products
-- ORDER BY Products.UnitPrice DESC
-- $$
-- 
-- DELIMITER ;
-- 
-- ----------------------------------------------------------------------------
-- Routine Northwind.Employee Sales by Country
-- ----------------------------------------------------------------------------
-- DELIMITER $$
-- 
-- DELIMITER $$
-- USE `Northwind`$$
-- 
-- create procedure "Employee Sales by Country" 
-- @Beginning_Date DateTime, @Ending_Date DateTime AS
-- SELECT Employees.Country, Employees.LastName, Employees.FirstName, Orders.ShippedDate, Orders.OrderID, "Order Subtotals".Subtotal AS SaleAmount
-- FROM Employees INNER JOIN 
-- 	(Orders INNER JOIN "Order Subtotals" ON Orders.OrderID = "Order Subtotals".OrderID) 
-- 	ON Employees.EmployeeID = Orders.EmployeeID
-- WHERE Orders.ShippedDate Between @Beginning_Date And @Ending_Date
-- $$
-- 
-- DELIMITER ;
-- 
-- ----------------------------------------------------------------------------
-- Routine Northwind.Sales by Year
-- ----------------------------------------------------------------------------
-- DELIMITER $$
-- 
-- DELIMITER $$
-- USE `Northwind`$$
-- 
-- create procedure "Sales by Year" 
-- 	@Beginning_Date DateTime, @Ending_Date DateTime AS
-- SELECT Orders.ShippedDate, Orders.OrderID, "Order Subtotals".Subtotal, DATENAME(yy,ShippedDate) AS Year
-- FROM Orders INNER JOIN "Order Subtotals" ON Orders.OrderID = "Order Subtotals".OrderID
-- WHERE Orders.ShippedDate Between @Beginning_Date And @Ending_Date
-- $$
-- 
-- DELIMITER ;
-- 
-- ----------------------------------------------------------------------------
-- Routine Northwind.CustOrdersDetail
-- ----------------------------------------------------------------------------
-- DELIMITER $$
-- 
-- DELIMITER $$
-- USE `Northwind`$$
-- 
-- CREATE PROCEDURE CustOrdersDetail @OrderID int
-- AS
-- SELECT ProductName,
--     UnitPrice=ROUND(Od.UnitPrice, 2),
--     Quantity,
--     Discount=CONVERT(int, Discount * 100), 
--     ExtendedPrice=ROUND(CONVERT(money, Quantity * (1 - Discount) * Od.UnitPrice), 2)
-- FROM Products P, [Order Details] Od
-- WHERE Od.ProductID = P.ProductID and Od.OrderID = @OrderID
-- $$
-- 
-- DELIMITER ;
-- 
-- ----------------------------------------------------------------------------
-- Routine Northwind.CustOrdersOrders
-- ----------------------------------------------------------------------------
-- DELIMITER $$
-- 
-- DELIMITER $$
-- USE `Northwind`$$
-- 
-- CREATE PROCEDURE CustOrdersOrders @CustomerID nchar(5)
-- AS
-- SELECT OrderID, 
-- 	OrderDate,
-- 	RequiredDate,
-- 	ShippedDate
-- FROM Orders
-- WHERE CustomerID = @CustomerID
-- ORDER BY OrderID
-- $$
-- 
-- DELIMITER ;
-- 
-- ----------------------------------------------------------------------------
-- Routine Northwind.CustOrderHist
-- ----------------------------------------------------------------------------
-- DELIMITER $$
-- 
-- DELIMITER $$
-- USE `Northwind`$$
-- CREATE PROCEDURE CustOrderHist @CustomerID nchar(5)
-- AS
-- SELECT ProductName, Total=SUM(Quantity)
-- FROM Products P, [Order Details] OD, Orders O, Customers C
-- WHERE C.CustomerID = @CustomerID
-- AND C.CustomerID = O.CustomerID AND O.OrderID = OD.OrderID AND OD.ProductID = P.ProductID
-- GROUP BY ProductName
-- $$
-- 
-- DELIMITER ;
-- 
-- ----------------------------------------------------------------------------
-- Routine Northwind.SalesByCategory
-- ----------------------------------------------------------------------------
-- DELIMITER $$
-- 
-- DELIMITER $$
-- USE `Northwind`$$
-- CREATE PROCEDURE SalesByCategory
--     @CategoryName nvarchar(15), @OrdYear nvarchar(4) = '1998'
-- AS
-- IF @OrdYear != '1996' AND @OrdYear != '1997' AND @OrdYear != '1998' 
-- BEGIN
-- 	SELECT @OrdYear = '1998'
-- END
-- 
-- SELECT ProductName,
-- 	TotalPurchase=ROUND(SUM(CONVERT(decimal(14,2), OD.Quantity * (1-OD.Discount) * OD.UnitPrice)), 0)
-- FROM [Order Details] OD, Orders O, Products P, Categories C
-- WHERE OD.OrderID = O.OrderID 
-- 	AND OD.ProductID = P.ProductID 
-- 	AND P.CategoryID = C.CategoryID
-- 	AND C.CategoryName = @CategoryName
-- 	AND SUBSTRING(CONVERT(nvarchar(22), O.OrderDate, 111), 1, 4) = @OrdYear
-- GROUP BY ProductName
-- ORDER BY ProductName
-- $$
-- 
-- DELIMITER ;
-- SET FOREIGN_KEY_CHECKS = 1;
