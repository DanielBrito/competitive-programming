select u.name as NAME, sum(t.amount) as BALANCE 
from Users u
join Transactions t on t.account = u.account
group by u.name
having sum(t.amount) > 10000;
