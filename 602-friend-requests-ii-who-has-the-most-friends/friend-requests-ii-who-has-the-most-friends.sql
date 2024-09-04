# Write your MySQL query statement below
-- select requester_id as id from RequestAccepted where accepter_id =(
--     select accepter_id from RequestAccepted group by accepter_id order by count(accepter_id)
--     desc limit 1
-- )

-- select requester_id as id from RequestAccepted where accepter_id in(
--     select accepter_id from RequestAccepted group by accepter_id order by count(accepter_id) 
--     desc limit 1
-- )

select requester_id as id,
    (select count(*) from RequestAccepted  where (requester_id = id or accepter_id = id)) as num
from RequestAccepted
group by requester_id
union 
select accepter_id as id,
    (select count(*) from RequestAccepted  where (requester_id = id or accepter_id = id)) as num
from RequestAccepted
group by accepter_id
order by num desc limit 1; 