-- Lists all the cities of California that can be found in the database
-- Cities of CA
-- select cities where state_id corresponds to name "California"
SELECT id, name FROM cities WHERE state_id = (SELECT id FROM states WHERE name = 'California') ORDER BY id ASC;
