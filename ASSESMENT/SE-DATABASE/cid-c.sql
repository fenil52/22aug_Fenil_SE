-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 02, 2023 at 11:42 AM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cid-c`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `customer_id` int(11) DEFAULT NULL,
  `cust_name` varchar(90) DEFAULT NULL,
  `city` varchar(90) DEFAULT NULL,
  `grade` varchar(90) DEFAULT NULL,
  `salesman_id` varchar(90) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`customer_id`, `cust_name`, `city`, `grade`, `salesman_id`) VALUES
(3002, 'nick rimando', 'new york', '100', '5001'),
(3007, 'brad davis', 'new york', '200', '5001'),
(3005, 'graham zusi', 'california', '200', '5002'),
(3008, 'julian green', 'london', '300', '5002'),
(3004, 'fabian johnson', 'paris', '300', '5006'),
(3009, 'geoff cameron', 'berlin', '100', '5003'),
(3003, 'jozy altidor', 'moscow', '200', '5005'),
(3001, 'brad guzan', 'london', '', '5005');

-- --------------------------------------------------------

--
-- Table structure for table `salesman`
--

CREATE TABLE `salesman` (
  `salesman_id` int(11) DEFAULT NULL,
  `name` varchar(90) DEFAULT NULL,
  `city` varchar(90) DEFAULT NULL,
  `commission` varchar(90) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salesman`
--

INSERT INTO `salesman` (`salesman_id`, `name`, `city`, `commission`) VALUES
(5001, 'james hoog', 'new york', '0.15'),
(5002, 'nail knite', 'paris', '0.13'),
(5005, 'pit alex', 'london', '0.11'),
(5006, 'mc lyon', 'paris', '0.14'),
(5007, 'paul adam', 'rome', '0.13'),
(5003, 'lauson hen', 'san jose', '0.12');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
