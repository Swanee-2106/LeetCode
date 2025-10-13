# Write your MySQL query statement below
SELECT r.contest_id, ROUND(count(u.user_id)*100/(Select Count(user_id) from Users),2) as percentage
from Users as u
Join Register as r
ON u.user_id = r.user_id
group by r.contest_id
ORDER BY percentage DESC , r.contest_id ASC