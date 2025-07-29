# Write your MySQL query statement below
SELECT 
    IFNULL(
    (
        SELECT 
        DISTINCT salary AS SecondHighestSalary
        FROM Employee
        ORDER BY SecondHighestSalary DESC
        LIMIT 1 OFFSET 1),
        NULL
) AS SecondHighestSalary