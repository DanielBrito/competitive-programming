select ctr.continent, floor(avg(cty.population)) from COUNTRY as ctr
join CITY as cty on cty.countrycode = ctr.code
group by ctr.continent
