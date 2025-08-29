# Write your MySQL query statement below
SELECT Department, Employee,Salary
FROM(
    SELECT d.name as Department,
    e.name as Employee,
    e.salary as Salary,
    DENSE_RANK() OVER(PARTITION BY e.departmentId ORDER BY salary DESC) as rnk
    FROM Employee as e
    LEFT JOIN Department as d
    ON e.departmentId= d.id
)t
WHERE rnk=1 OR rnk=2 OR rnk= 3;