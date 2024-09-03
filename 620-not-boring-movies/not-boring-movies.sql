# Write your MySQL query statement below
select id,movie,description,rating from Cinema where id%2!=0 and id not in
(select id from cinema where description="boring") order by rating desc