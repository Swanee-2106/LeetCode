# Write your MySQL query statement below
Select e.name,b.bonus
from Employee as e
Left join Bonus as b
On e.empId=b.empId
where b.bonus<1000 or b.bonus IS NULL