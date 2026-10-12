select distinct
  CITY
from
  STATION
where
  CITY not regexp '[AEIOUaeiou]$'
  and CITY not regexp '^[AEIOUaeiou]';