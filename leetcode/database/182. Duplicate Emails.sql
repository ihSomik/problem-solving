select distinct
  p.email
from
  Person p
  join Person q on p.email = q.email
where
  p.id != q.id;