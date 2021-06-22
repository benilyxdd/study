-- https://sqlzoo.net/wiki/SELECT_from_Nobel_Tutorial

-- 1
SELECT yr, subject, winner
  FROM nobel
 WHERE yr = 1950

-- 2
SELECT winner
  FROM nobel
 WHERE yr = 1962
   AND subject = 'Literature'

-- 3
select yr, subject from nobel
 where winner = 'Albert Einstein'

-- 4
select winner from nobel
 where yr > 1999 and subject = 'Peace'

-- 5
select * from nobel
 where subject = 'Literature' AND yr > 1979 and yr < 1990
 
-- 6
select * from nobel
 where winner IN ('Theodore Roosevelt', 'Woodrow Wilson', 'Jimmy Carter','Barack Obama')

-- 7
select winner from nobel
 where left(winner, 4) = 'John'

-- 8
select * from nobel 
 where (subject = 'Physics' AND yr = 1980) OR (yr = 1984 AND subject = 'Chemistry')

-- 9
select * from nobel
 where subject NOT IN ('Chemistry', 'Medicine') AND yr = 1980

-- 10
select * from nobel
 where (yr < 1910 and subject = 'Medicine') or (yr > 2003 AND subject = 'Literature')

-- 11
select * from nobel
 where winner = 'PETER GRÜNBERG'

-- 12
select * from nobel 
 where winner = 'EUGENE O''NEILL'

-- 13
select winner, yr, subject from nobel
 where winner like 'Sir%'
order by yr desc, winner asc

-- 14 
-- well, i don't know either, it just keep giving me error
-- Incorrect syntax near the keyword 'IN'.