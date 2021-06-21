-- https://sqlzoo.net/wiki/More_JOIN_operations

-- 1
SELECT id, title
 FROM movie
 WHERE yr=1962

-- 2
SELECT yr FROM movie
 WHERE title = 'Citizen Kane'

-- 3
SELECT id, title, yr FROM movie
 WHERE title LIKE '%Star Trek%'
ORDER BY yr

-- 4
