# Write your MySQL query statement below
SELECT 
    e.name as Employee
FROM 
    Employee e,
    Employee m
WHERE 
    e.managerId = m.id
    AND
    e.salary > m.salary
