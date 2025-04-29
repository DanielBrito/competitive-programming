select round(LONG_W, 4)
from STATION
where LAT_N = (
    select min(LAT_N)
    from STATION
    where LAT_N > 38.7780
);
