select
  sum(ct.POPULATION)
from
  CITY ct
  join COUNTRY cn on ct.COUNTRYCODE = cn.CODE
where
  cn.CONTINENT = 'Asia';