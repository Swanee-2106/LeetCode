# Write your MySQL query statement below
SELECT max(salary) AS SecondHighestSalary
FROM Employee
WHERE salary not in( SELECT max(salary)  FROM Employee);