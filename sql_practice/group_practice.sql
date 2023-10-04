use smartfactory;

select custid, sum(price*amount) as 'total_price'
	from orders
    group by custid
    having sum(price*amount)>=15000;
    
select * from orders;

select prodname, sum(amount) as 'total_amount'
	from orders
    group by prodname
    order by sum(amount) desc, prodname;