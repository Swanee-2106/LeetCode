# Write your MySQL query statement below
SELECT 
    w.name as Employee
FROM 
    Employee w,
    Employee m
WHERE 
    w.managerId = m.id
    AND
    w.salary > m.salary
