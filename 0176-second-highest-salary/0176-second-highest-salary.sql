# Write your MySQL query statement below
SELECT max(salary) AS SecondHighestSalary
FROM Employee
WHERE salary NOT IN (SELECT max(salary) FROM Employee)
#another way
#SELECT (
#   SELECT DISTINCT salary
#    FROM Employee
#    ORDER BY salary DESC
#    LIMIT 1 OFFSET 1
#) AS SecondHighestSalary