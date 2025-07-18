select distinct
  n.id as id,
  case
    when n.p_id is null then 'Root'
    when m.id is null then 'Leaf'
    else 'Inner'
  end as type
from
  Tree n
  left join Tree m on n.id = m.p_id;