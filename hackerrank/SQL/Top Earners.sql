select
  max(salary * months),
  count(*)
from
  Employee
where
  salary * months = (
    select
      max(salary * months)
    from
      Employee
  );