use codingon;
#실습 4의 1
select distinct customer_id from orders
	where date>='2022-01-01' and date<='2022-02-01';
#실습 4의 2
select distinct name from customers
	where id=
    (select distinct customer_id from orders
    where date>='2022-01-01' and date<='2022-02-01');
#실습 4의 3
select * from orders order by total desc limit 1;
#실습 4의 4
select * from orders where total=(select max(total) from orders);
#실습 4의 5
select order_id, sum(quantity) from order_detail group by order_id;
#임시 테이블 명명
WITH OrderSummary AS (
    SELECT order_id, SUM(quantity) AS total_quantity
    FROM order_detail
    GROUP BY order_id
)
select * from orders left join OrderSummary on orders.id=OrderSummary.order_id;

select * from orders left join (select order_id, sum(quantity) from order_detail group by order_id) as abc on orders.id=abc.order_id;
#실습 4의 5
select customer_id, count(id) as '주문 횟수' from orders group by customer_id;
#실습 4의 6
select customer_id, sum(total) as 'total_price' from orders group by customer_id having sum(total)>=21000;
#실습 4의 7
select * from customers left join orders on customers.id=orders.customer_id;
#실습 4의 8
select * from customers left join (select customer_id from orders) as abc on customers.id=abc.customer_id;
select * from (select * from customers left join (select customer_id from orders) as abc on customers.id=abc.customer_id) as a where a.customer_id is null;