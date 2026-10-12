select
  CONTINENT,
  floor(avg(ct.POPULATION))
from
  CITY ct
  join COUNTRY cn on ct.COUNTRYCODE = cn.CODE
group by
  CONTINENT;