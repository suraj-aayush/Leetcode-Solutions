# Write your MySQL query statement below
select product_name, year, price 
from product p, sales s
where s.product_id = p.product_id;
