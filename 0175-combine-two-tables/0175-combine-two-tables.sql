# Write your MySQL query statement below
SELECT 
    p.firstName,
    p.lastName,
    A.city,
    A.state
FROM Person AS p
LEFT JOIN Address AS A
ON p.personId=A.personId;