# Write your MySQL query statement below
select name as Customers
from Customers
Where id NOT IN (
    select customerId
    from Orders
)