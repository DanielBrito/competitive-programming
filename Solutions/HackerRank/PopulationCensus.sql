select sum(ct.POPULATION) from CITY ct
join COUNTRY ctr on ctr.CODE = ct.COUNTRYCODE
where ctr.CONTINENT = 'Asia';
