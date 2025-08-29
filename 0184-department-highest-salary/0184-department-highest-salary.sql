# Write your MySQL query statement below
/*SELECT d.name as Department,e.name as Employee, e.salary as Salary
FROM Employee as e
LEFT JOIN Department as d
ON e.departmentId= d.id
WHERE (d.id,e.salary) IN (
    SELECT departmentId,max(salary)
    FROM Employee 
    GROUP By departmentId
);*/
SELECT Department, Employee, Salary
FROM(
SELECT 
d.name as Department, e.name as Employee, e.salary as Salary,
DENSE_RANK() OVER(PARTITION BY e.departmentId ORDER BY salary DESC) as Rnk
FROM Employee as e
LEFT JOIN Department as d
ON e.departmentId=d.id
)t
WHERE rnk= 1;