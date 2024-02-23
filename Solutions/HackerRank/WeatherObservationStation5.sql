select city, length(city) as city_length from station order by city_length asc, city limit 1;
select city, length(city) as city_length from station order by city_length desc, city limit 1;
