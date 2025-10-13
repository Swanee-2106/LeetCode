# Write your MySQL query statement below
select p.product_id, ROUND(IFNULL(Sum(p.price*u.units)/SUM(u.units),0),2) as average_price
from Prices as p
Left Join UnitsSold as u
On p.product_id=u.product_id and u.purchase_date between p.start_date and p.end_date
GROUP BY p.product_id
