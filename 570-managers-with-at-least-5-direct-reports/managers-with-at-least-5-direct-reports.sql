# Write your MySQL query statement below
select e.name from employee e join(
    select managerId,count(*) as directreports
    from employee 
    group by managerId
    having count(*) >=5
)s on e.id = s.managerId