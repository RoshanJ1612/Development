# Write your MySQL query statement below
select user_id, CONCAT(Upper(SUBSTRING(name, 1,1)), Lower(SUBSTRING(name, 2))) as name from Users order by user_id asc;