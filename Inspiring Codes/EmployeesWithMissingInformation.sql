-- https://leetcode.com/problems/employees-with-missing-information/

SELECT employee_id
FROM employees FULL JOIN salaries USING(employee_id) -- USING preserves employee_id in just one column.
WHERE salary IS NULL OR name IS NULL -- Then, we can check the null fields.
