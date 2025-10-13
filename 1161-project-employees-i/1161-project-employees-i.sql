# Write your MySQL query statement below
SELECT p.project_id, ROUND(AVG(e.experience_years),2) as average_years
from Project as p
Left Join Employee as e
On p.employee_id=e.employee_id
group by p.project_id