SELECT a.id
FROM Weather a, Weather b
WHERE a.Temperature > b.Temperature AND DATEDIFF(a.recordDate, b.recordDate) = 1