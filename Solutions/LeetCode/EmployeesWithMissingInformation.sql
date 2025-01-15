select coalesce(e.employee_id, s.employee_id) as employee_id
from Employees e
full join Salaries s on e.employee_id = s.employee_id
where (e.name is null and e.employee_id is null) or (s.salary is null and s.employee_id is null)
order by employee_id asc;
