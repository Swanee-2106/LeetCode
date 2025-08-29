# Write your MySQL query statement below
SELECT s.name as Employee
FROM Employee s
JOIN Employee m
ON s.managerId=m.id
WHERE s.salary>m.salary