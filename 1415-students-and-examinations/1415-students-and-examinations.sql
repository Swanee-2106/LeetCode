# Write your MySQL query statement below
SELECT s.student_id,s.student_name,SU.subject_name, COUNT(e.student_id) as attended_exams
From Students as s
CROSS JOIN Subjects as SU
LEFT JOIN Examinations as e
On s.student_id = e.student_id and SU.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, SU.subject_name
ORDER BY s.student_id,SU.subject_name