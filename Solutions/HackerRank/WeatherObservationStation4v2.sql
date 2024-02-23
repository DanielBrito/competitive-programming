select abs(total_count - distinct_count) as unique_names
from (
    select count(city) as total_count, count(distinct city) as distinct_count
    from station
) as subquery;
