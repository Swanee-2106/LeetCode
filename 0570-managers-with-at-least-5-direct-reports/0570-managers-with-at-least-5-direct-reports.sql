# Write your MySQL query statement below
SELECT E1.name
FROM Employee E1
JOIN(SELECT managerId, COUNT(*) as DirectReports
FROM Employee
GROUP BY managerId
HAVING count(*)>=5
) E2 
ON E1.id = E2.managerId
