select euni.unique_id, e.name
from Employees e
full join EmployeeUNI euni on e.id = euni.id
where name is not null;
