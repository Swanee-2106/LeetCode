# Write your MySQL query statement below
/*DELETE FROM Person
WHERE Id IN (
    SELECT Id
    FROM (
        SELECT Id, ROW_NUMBER() OVER (PARTITION BY Email ORDER BY Id) AS rn
        FROM Person
    ) t
    WHERE rn > 1
);*/
DELETE p2
FROM Person p1
JOIN Person p2
ON p1.email=p2.email AND p2.id>p1.id;
