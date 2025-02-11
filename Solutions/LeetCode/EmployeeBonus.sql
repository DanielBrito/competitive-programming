select e.name, b.bonus from Employee e
left join Bonus b on b.empId = e.empId
where b.bonus < 1000 or b.bonus is null
