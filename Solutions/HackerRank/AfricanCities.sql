select city.name
from city
join country on city.countrycode = country.code
where country.continent = 'Africa'
