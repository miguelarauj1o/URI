SELECT c.name, round((((s.math * 2) + (s.specific * 3) + (s.project_plan * 5)) / 10), 2) AS "avg" 
FROM candidate c inner JOIN score s ON c.id = s.candidate_id
ORDER BY avg DESC;