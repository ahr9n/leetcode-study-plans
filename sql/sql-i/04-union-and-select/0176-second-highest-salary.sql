# Write your MySQL query statement below

select 
    max(case
        when salary not in (select max(salary) from Employee) then salary
        else null
    end)
    as SecondHighestSalary 
from Employee
