SELECT si.roll_number, si.name
FROM student_information si
JOIN faculty_department fd ON si.advisor = fd.employee_ID
WHERE (
    fd.gender = 'M'
    AND fd.salary > 15000
) OR (
    fd.gender = 'F'
    AND fd.salary > 20000
);
