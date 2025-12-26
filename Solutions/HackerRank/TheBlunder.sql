SELECT
    CEIL(
        AVG(Salary)
        -
        (
            SELECT AVG(
                CAST(
                    REPLACE(CAST(Salary AS CHAR), '0', '') AS DECIMAL(10,2)
                )
            )
            FROM EMPLOYEES
        )
    ) AS miscalculated_avg
FROM EMPLOYEES;
