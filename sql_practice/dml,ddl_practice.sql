use codingon;

DROP TABLE IF EXISTS customers;
create table customers(
	id varchar(50) not null primary key,
    name varchar(50) not null,
    email varchar(255) not null,
    address varchar(255) not null
);
    
DROP TABLE IF EXISTS orders;
create table orders(
	id int not null primary key auto_increment,
    customer_id varchar(50),
    foreign key (customer_id) references customers(id) on update cascade on delete cascade,
    date date not null
);
    
DROP TABLE IF EXISTS order_detail;
create table order_detail(
	order_id int,
	foreign key (order_id) references orders(id) on update cascade on delete cascade,
    item varchar(50) not null,
    quantity int not null
);

select * from customers;
insert into customers values
	('john123', 'John Smith', 'john.smith@gmail.com', '123 Main St, Anytown, USA'),
	('jane456', 'Jane Doe', 'jane.doe@yahoo.com', '456 Oak Ave, Somewhere'),
	('alice789', 'Alice Johnson', 'alice.johnson@hotmail.com', '789 Elm St, Nowhere');

select * from orders;
insert into orders values
	(1, 'john123', '2022-01-01'),
	(2, 'john123', '2022-02-01'),
	(3, 'jane456', '2022-03-01');

select * from order_detail;
desc customers;
desc orders;
desc order_detail;
insert into order_detail values
	(1, 'pen', 10),
	(1, 'toy', 2),
	(2, 'clothes', 5),
	(3, 'socks', 100);
    
alter table orders add total int;
update orders set total=10000 where id=1;
update orders set total=15000 where id=2;
update orders set total=20000 where id=3;
update orders set customer_id='John Park' where customer_id='john123';