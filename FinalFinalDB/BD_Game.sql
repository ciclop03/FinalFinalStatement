

--
-- Base de datos: `game`
--

-- --------------------------------------------------------


CREATE SCHEMA IF NOT EXISTS `game` DEFAULT CHARACTER SET utf8 ;
USE `game` ;


SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";

-- phpMyAdmin SQL Dump
-- version 4.8.2
-- https://www.phpmyadmin.net/
--


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;


-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `player`
--

CREATE TABLE `player` (
  `nick` varchar(40) NOT NULL,
  `name` varchar(40) NOT NULL,
  `lastname` varchar(40) NOT NULL,
  `gender` char(1) NOT NULL,
  `age` int(3) NOT NULL,
  `country` varchar(45) NOT NULL,
  `wins` int(200) NOT NULL,
  `looses` int(200) NOT NULL,
  `points` int(200) NOT NULL,
  `character` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Volcado de datos para la tabla `player`
--

INSERT INTO `player` (`nick`, `name`, `lastname`, `gender`, `age`, `country`, `wins`, `looses`, `points`) VALUES
('Punk', 'Victor', 'Woodley', 'M', 20, 'EEUU', 200, 22, 900),
('Fuudo', 'Keita', 'Ai', 'M', 33, 'Japon', 196, 28, 850);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `genero`
--

CREATE TABLE `character` (
  `idcharacter` int(11) NOT NULL,
  `name` varchar(40) NOT NULL,
  `lastname` varchar(40) NOT NULL,
  `gender` char(1) NOT NULL,
  `age` int(3) NOT NULL,
  `damage` int(11) NOT NULL,
  `hit_points` int(11) NOT NULL,
  `defense_option` int(11) NOT NULL,
  `resistant` int(11) NOT NULL,
  `attack_range` int(11) NOT NULL,
  `projectile` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Volcado de datos para la tabla `character`
--

INSERT INTO `character` (`idcharacter`, `name`,`lastname` ,`gender` , `age`, `damage`,`hit_points` , `defense_option`, `resistant`, `attack_range`,  `projectile`) VALUES

(1, 'KARIN');

-- --------------------------------------------------------


--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `player`
--
ALTER TABLE `player`
  ADD PRIMARY KEY (`nick`),
  ADD KEY `fk_character_idcharacter_idx` (`character`);

--
-- Indices de la tabla `character`
--
ALTER TABLE `character`
  ADD PRIMARY KEY (`idcharacter`);



--
-- AUTO_INCREMENT de la tabla `character`
--
ALTER TABLE `character`
  MODIFY `idcharacter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=40;


--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `player`
--
ALTER TABLE `player`
  ADD CONSTRAINT `fk_player_character` FOREIGN KEY (`character`) REFERENCES `character` (`idcharacter`) ON DELETE NO ACTION ON UPDATE NO ACTION;



/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
