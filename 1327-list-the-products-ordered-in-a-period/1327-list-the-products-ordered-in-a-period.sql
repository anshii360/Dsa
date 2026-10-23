# Write your MySQL query statement below
select Products.product_name,sum(Orders.unit) as unit from Products
Join Orders
On Products.product_id=Orders.product_id
where Orders.order_date between '2020-02-01' and '2020-02-29' 
group by Products.product_id , Products.product_name
having sum(Orders.unit)>=100;