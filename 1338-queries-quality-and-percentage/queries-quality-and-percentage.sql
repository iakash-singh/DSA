# Write your MySQL query statement below
SELECT 
    query_name, 
    ROUND(avg(rating/position), 2) AS quality, 
    ROUND(avg(rating <3) * 100, 2) AS poor_query_percentage
FROM 
    Queries
where
    query_name is not null
GROUP BY 
    query_name;


-- SELECT 
--     query_name, 
--     ROUND(avg(rating/position), 2) AS quality, 
--     ROUND(SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END) / COUNT(*) * 100, 2) AS poor_query_percentage
-- FROM 
--     Queries
-- where 
--     query_name is not null
-- GROUP BY 
--     query_name