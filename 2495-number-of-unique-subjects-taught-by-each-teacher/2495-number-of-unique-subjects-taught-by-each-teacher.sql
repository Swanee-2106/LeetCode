# Write your MySQL query statement below
-- SELECT teacher_id,count(subject_id) as cnt
-- FROM
-- (SELECT teacher_id,subject_id
-- From Teacher
-- GROUP BY teacher_id,subject_id)t
-- GROUP BY teacher_id

SELECT teacher_id,count(DISTINCT subject_id)AS cnt
FROM Teacher
GROUP BY teacher_id
