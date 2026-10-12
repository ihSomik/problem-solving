(
  select
    CITY,
    length (CITY) as len
  from
    STATION
  order by
    len,
    CITY
  limit
    1
)
union
(
  select
    CITY,
    length (CITY) as len
  from
    STATION
  order by
    len desc,
    CITY
  limit
    1
);