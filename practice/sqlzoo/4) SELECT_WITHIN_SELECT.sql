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
