-- MySQL dump 10.13  Distrib 8.0.11, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: adminlog
-- ------------------------------------------------------
-- Server version	8.0.11

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
 SET NAMES utf8 ;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `attendance`
--

DROP TABLE IF EXISTS `attendance`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
 SET character_set_client = utf8mb4 ;
CREATE TABLE `attendance` (
  `idStudent` varchar(45) NOT NULL,
  `year` varchar(45) NOT NULL,
  `month` varchar(45) NOT NULL,
  `Day1` varchar(45) DEFAULT NULL,
  `Day2` varchar(45) DEFAULT NULL,
  `Day3` varchar(45) DEFAULT NULL,
  `Day4` varchar(45) DEFAULT NULL,
  `Day5` varchar(45) DEFAULT NULL,
  `Day6` varchar(45) DEFAULT NULL,
  `Day7` varchar(45) DEFAULT NULL,
  `Day8` varchar(45) DEFAULT NULL,
  `Day9` varchar(45) DEFAULT NULL,
  `Day10` varchar(45) DEFAULT NULL,
  `Day11` varchar(45) DEFAULT NULL,
  `Day12` varchar(45) DEFAULT NULL,
  `Day13` varchar(45) DEFAULT NULL,
  `Day14` varchar(45) DEFAULT NULL,
  `Day15` varchar(45) DEFAULT NULL,
  `Day16` varchar(45) DEFAULT NULL,
  `Day17` varchar(45) DEFAULT NULL,
  `Day18` varchar(45) DEFAULT NULL,
  `Day19` varchar(45) DEFAULT NULL,
  `Day20` varchar(45) DEFAULT NULL,
  `Day21` varchar(45) DEFAULT NULL,
  `Day22` varchar(45) DEFAULT NULL,
  `Day23` varchar(45) DEFAULT NULL,
  `Day24` varchar(45) DEFAULT NULL,
  `Day25` varchar(45) DEFAULT NULL,
  `Day26` varchar(45) DEFAULT NULL,
  `Day27` varchar(45) DEFAULT NULL,
  `Day28` varchar(45) DEFAULT NULL,
  `Day29` varchar(45) DEFAULT NULL,
  `Day30` varchar(45) DEFAULT NULL,
  `Day31` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`year`,`month`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `attendance`
--

LOCK TABLES `attendance` WRITE;
/*!40000 ALTER TABLE `attendance` DISABLE KEYS */;
INSERT INTO `attendance` VALUES ('samir1996227131','2018','1','a','a','','','','','','','','','','','','','','','','','','','','','','','','','','','','','');
/*!40000 ALTER TABLE `attendance` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-07-03 16:44:31
