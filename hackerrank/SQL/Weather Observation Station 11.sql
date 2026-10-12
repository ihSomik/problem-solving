select distinct
  CITY
from
  STATION
where
  CITY not regexp '[AEIOUaeiou]$'
  or CITY not regexp '^[AEIOUaeiou]';