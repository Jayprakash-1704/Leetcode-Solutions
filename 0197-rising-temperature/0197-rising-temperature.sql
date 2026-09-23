# Write your MySQL query statement below
select p1.id
from Weather p1
join Weather p2
on datediff(p1.recordDate , p2.recordDate)=1
where p1.temperature>p2.temperature
