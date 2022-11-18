# Write your MySQL query statement below

select c.name as Customers 
from Customers c left join Orders o
on o.customerId = c.id where o.id is null;
