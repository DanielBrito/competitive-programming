select c.name as "Customers"
from Customers c
full join Orders o on o.customerId = c.id
where o.customerId is null
