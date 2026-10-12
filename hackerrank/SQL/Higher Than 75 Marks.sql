select
  Name
from
  STUDENTS
where
  Marks > 75
order by
  substring(Name, -3),
  ID;