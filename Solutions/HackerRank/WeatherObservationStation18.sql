select round(
    abs((select min(LAT_N) from STATION) - (select max(LAT_N) from STATION)) +
    abs((select min(LONG_W) from STATION) - (select max(LONG_W) from STATION))
, 4) as distance
from STATION
limit 1;
