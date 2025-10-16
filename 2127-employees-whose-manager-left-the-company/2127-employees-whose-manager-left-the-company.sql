# Write your MySQL query statement below
Select e1.employee_id
FROM Employees as e1
LEFT JOIN Employees as e2
ON e1.manager_id = e2.employee_id
WHERE e2.employee_id is NULL and e1.manager_id is NOT NULL and e1.salary<30000
ORDER BY e1.employee_id