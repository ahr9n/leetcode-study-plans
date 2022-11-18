# Write your MySQL query statement below

select * from Patients
where conditions regexp "(^DIAB1|(.*\\sDIAB1))";
