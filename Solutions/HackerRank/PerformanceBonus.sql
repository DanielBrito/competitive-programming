SELECT ei.employee_ID, ei.name
FROM employee_information ei
JOIN last_quarter_bonus lqb ON ei.employee_ID = lqb.employee_ID
WHERE ei.area = 'HR'
AND lqb.bonus > 5000;
