# Write your MySQL query statement below
-- select e.name from employee e join(
--     select managerId,count(*) as directreports
--     from employee 
--     group by managerId
--     having count(*) >=5
-- )s on e.id = s.managerId

-- select e.name from employee as e
-- inner join employee as m on e.id=m.managerId
-- group by m.managerId
-- having count(m.managerId) >=5 

select name from Employee
where id in(
    select managerId from Employee group by managerId 
    having count(*) >=5
)

