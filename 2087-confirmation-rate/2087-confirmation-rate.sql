# Write your MySQL query statement below
-- select s.user_id,ROUND(IFNULL(SUM(c.action = 'confirmed') / COUNT(c.action), 0),2) AS confirmation_rate
-- from Signups as s
-- left join Confirmations as c
-- On s.user_id=c.user_id
-- group by s.user_id
select s.user_id, ROUND(ifnull(c1.confirmed/c2.action,0),2) as confirmation_rate
from Signups as s
left JOIN
    (select user_id,count(*) as confirmed
    from Confirmations
    where action='confirmed'
    group by user_id) as c1
ON s.user_id = c1.user_id
left Join
    (select user_id,count(*) as action
    from Confirmations
    group by user_id) as c2
ON s.user_id = c2.user_id

