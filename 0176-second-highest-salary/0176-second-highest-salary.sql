# Write your MySQL query statement below
/*SELECT max(salary) AS SecondHighestSalary
FROM Employee
WHERE salary not in( SELECT max(salary)  FROM Employee);*/
SELECT MAX(salary) As SecondHighestSalary
FROM(
    SELECT Salary, DENSE_RANK() OVER(ORDER BY Salary DESC) AS rnk
    FROM Employee
)t 
WHERE rnk = 2;