# Write your MySQL query statement below
-- SELECT t1.machine_id,ROUND((t1.sum - t2.sum)/t1.count,3) as processing_time
-- from    
--     (SELECT machine_id, sum(timestamp) as sum,count(process_id) as count,activity_type
--     from Activity
--     GROUP BY machine_id,activity_type)AS t1
-- LEFT JOIN 
--     (SELECT machine_id, sum(timestamp) as sum,count(process_id) as count,activity_type
--     from Activity
--     GROUP BY machine_id,activity_type)AS t2
-- ON t1.machine_id = t2.machine_id 
-- WHERE t1.activity_type = 'end' and t2.activity_type='start'

Select a.machine_id,ROUND(AVG(b.timestamp - a.timestamp), 3) AS processing_time
From Activity as a
Left Join Activity as b
ON a.machine_id = b.machine_id AND a.process_id = b.process_id
WHERE a.activity_type = 'start'AND b.activity_type = 'end'
GROUP BY a.machine_id