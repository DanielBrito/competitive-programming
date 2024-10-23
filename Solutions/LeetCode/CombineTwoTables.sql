select p.firstName as firstname, p.lastName as lastname, a.city, a.state 
from person p
left join address a on p.personId = a.personId;
