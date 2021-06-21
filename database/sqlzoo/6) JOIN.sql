-- https://sqlzoo.net/wiki/The_JOIN_operation

-- 1
SELECT matchid, player FROM goal 
  WHERE teamid LIKE '%GER'

-- 2
SELECT id,stadium,team1,team2
  FROM game
 WHERE id = '1012'

-- 3
SELECT player, teamid, stadium, mdate
  FROM game JOIN goal ON (id = matchid)
 WHERE teamid = 'GER'

-- 4
SELECT team1, team2, player FROM game JOIN goal ON (id = matchid)
 WHERE goal.player like 'Mario%'

-- 5
SELECT player, teamid, coach, gtime
  FROM goal JOIN eteam ON (id = teamid)
 WHERE gtime<=10

-- 6
SELECT mdate, teamname FROM game JOIN eteam ON (team1 = eteam.id)
 WHERE eteam.coach = 'Fernando Santos'

-- 7
SELECT player FROM goal JOIN game ON(id = matchid) 
 WHERE game.stadium = 'National Stadium, Warsaw'

-- 8
SELECT DISTINCT player
  FROM game JOIN goal ON matchid = id 
    WHERE (team1='GER' OR team2='GER') AND teamid != 'GER'

-- 9
SELECT teamname, COUNT(gtime)
  FROM eteam JOIN goal ON id=teamid
GROUP BY teamname
 ORDER BY teamname

-- 10
SELECT stadium, COUNT(gtime) 
 FROM game JOIN goal ON (id = matchid)
GROUP BY stadium

-- 11
SELECT matchid, mdate, COUNT(*)
  FROM game JOIN goal ON matchid = id 
 WHERE (team1 = 'POL' OR team2 = 'POL')
GROUP BY matchid, mdate

-- 12
SELECT matchid, mdate, COUNT(gtime)
 FROM goal JOIN game ON (matchid = id)
WHERE goal.teamid = 'GER'
 GROUP BY matchid, mdate

-- 13
SELECT mdate, 
	   team1, 
	   SUM(CASE WHEN teamid = team1 THEN 1 ELSE 0 END) AS score1, 
	   team2, 
	   SUM(CASE WHEN teamid = team2 THEN 1 ELSE 0 END) AS score2 FROM
	game LEFT JOIN goal ON (id = matchid)
	GROUP BY id
	ORDER BY mdate, matchid, team1, team2