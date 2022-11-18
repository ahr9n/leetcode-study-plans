# Write your MySQL query statement below

select w2.id from Weather w1, Weather w2
where to_days(w1.recordDate) + 1 = to_days(w2.recordDate) and w1.temperature < w2.temperature
