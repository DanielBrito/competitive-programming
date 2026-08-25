select 
    sell_date, 
    count(distinct(product)) as num_sold, 
    string_agg(distinct(product), ',' order by product) as products
from Activities
group by sell_date
order by sell_date
