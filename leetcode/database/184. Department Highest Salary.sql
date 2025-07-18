SELECT
  d.name AS Department,
  e.name AS Employee,
  salary AS Salary
FROM
  Employee e
  JOIN Department d ON e.departmentId = d.id
WHERE
  (departmentId, salary) IN (
    SELECT
      departmentId,
      max(salary)
    FROM
      Employee
    GROUP BY
      departmentId
  );