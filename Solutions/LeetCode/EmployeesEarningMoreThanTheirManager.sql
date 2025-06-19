select e.name as "Employee" 
from Employee e
where e.managerId is not null
and e.salary > (
    select e2.salary 
    from Employee e2
    where e2.id = e.managerId
)
