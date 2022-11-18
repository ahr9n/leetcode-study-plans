# Write your MySQL query statement below

select actor_id, director_id

from ActorDirector

group by 1, 2

having count(actor_id) > 2
