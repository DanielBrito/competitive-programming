select round(
    sqrt(
        pow((select max(LAT_N) from STATION) - (select min(LAT_N) from STATION), 2) +
        pow((select max(LONG_W) from STATION) - (select min(LONG_W) from STATION), 2)
    ), 4
) as distance
from STATION
limit 1;
