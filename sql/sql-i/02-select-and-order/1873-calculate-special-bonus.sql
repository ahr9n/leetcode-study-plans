# Write your MySQL query statement below

select employee_id,
    case 
        when employee_id & 1 = 1 and name not like 'M%' 
            then salary
        else 0 
    END
    as bonus
from Employees
order by employee_id;
