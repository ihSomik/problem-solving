select distinct
  CITY
from
  STATION
where
  CITY regexp '[AEIOUaeiou]$'
  and CITY regexp '^[AEIOUaeiou]';