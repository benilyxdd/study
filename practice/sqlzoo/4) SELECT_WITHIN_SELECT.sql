-- https://sqlzoo.net/wiki/SELECT_within_SELECT_Tutorial

-- 1
SELECT name FROM world
  WHERE population >
     (SELECT population FROM world
      WHERE name='Russia')

-- 2
select name from world
 where continent = 'Europe' AND(gdp / population) > 
(select (gdp / population) from world where name = 'United Kingdom')

-- 3
select name, continent from world
 where continent in (select continent from world where name in ('Argentina', 'Australia'))

-- 4
select name, population from world 
 where population > (select population from world where name = 'Canada') AND 
population < (select population from world where name = 'Poland')

-- 5
select name,  concat(cast(round(population / (select population from world where name = 'Germany') * 100, 0) as float), '%') from world
 where continent = 'Europe'

-- 6
SELECT name FROM world
 WHERE gdp > ALL(SELECT gdp FROM world WHERE continent = 'Europe' AND gdp > 0)

-- 7
SELECT continent, name, area FROM world x
  WHERE area >= ALL
    (SELECT area FROM world y
        WHERE y.continent = x.continent
          AND area>0)

-- 8
SELECT continent, name FROM world x
 WHERE name <= ALL(SELECT name FROM world y WHERE x.continent = y.continent)

-- 9
SELECT name, continent, population FROM world x
 WHERE 25000000 >= ALL(SELECT population FROM world y WHERE x.continent = y.continent)

-- 10
SELECT name, continent FROM world x
 WHERE population >= ALL(SELECT population * 3 FROM world y WHERE x.continent = y.continent AND x.name != y.name)