# Write your MySQL query statement below

select s.name as name from SalesPerson s

where s.sales_id not in 

(select o.sales_id 
 from Orders o left outer join Company c 
 on c.com_id = o.com_id
 where c.name = "RED")
