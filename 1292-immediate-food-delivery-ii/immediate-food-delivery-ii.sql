# Write your MySQL query statement below
select 
round(avg(order_date = customer_pref_delivery_date)*100,2) as immediate_percentage
from Delivery
where (customer_id,order_date) in (
    select customer_id,min(order_date) from delivery
    group by customer_id
)





-- SELECT 
--     ROUND(
--         (SELECT COUNT(DISTINCT customer_id) 
--          FROM Delivery 
--          WHERE order_date != customer_pref_delivery_date) 
--         * 100.0 / COUNT(DISTINCT customer_id), 2
--     ) AS immediate_percentage
-- FROM 
--     Delivery;
