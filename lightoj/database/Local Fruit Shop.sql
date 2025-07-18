SELECT 
  item,
  LAST_DAY(date) AS date,
  SUM(count) AS count
FROM product
GROUP BY item, LAST_DAY(date)
ORDER BY item, date;
