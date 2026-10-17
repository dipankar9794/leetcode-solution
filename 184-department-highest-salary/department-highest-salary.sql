# Write your MySQL query statement below
select  department.name as Department,employee.name as Employee, employee.salary as Salary from employee
inner join department on employee.departmentId = department.id
where (departmentId,salary) in (select departmentId,max(salary) from employee
group  by departmentId);