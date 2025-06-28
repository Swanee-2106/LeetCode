# Write your MySQL query statement below
SELECT E.employee_id 
FROM Employees AS E
LEFT JOIN Salaries AS S ON S.employee_id = E.employee_id
WHERE s.employee_id IS NULL
UNION
SELECT S.employee_id 
FROM Employees AS E
RIGHT JOIN Salaries AS S ON E.employee_id = S.employee_id
WHERE e.employee_id IS NULL
ORDER BY employee_id ASC