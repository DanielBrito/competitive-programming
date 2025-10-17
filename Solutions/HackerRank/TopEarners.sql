SELECT 
    MAX(salary * months) AS amount,
    COUNT(*) AS counter
FROM Employee
WHERE salary * months = (
    SELECT MAX(salary * months)
    FROM Employee
);
