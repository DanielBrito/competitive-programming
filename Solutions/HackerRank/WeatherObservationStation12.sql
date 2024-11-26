select distinct city 
from station 
where not regexp_like(city, '^[aeiou]', 'i') 
and not regexp_like(city, '[aeiou]$', 'i');
