USE smartfactory;
-- 연습 데이터베이스 생성
DROP TABLE IF EXISTS customer;
CREATE TABLE customer
( custid    CHAR(10) NOT NULL PRIMARY KEY,
  custname  VARCHAR(10) NOT NULL,
  addr      CHAR(10) NOT NULL,
  phone     CHAR(11),
  birth     DATE
);
DROP TABLE IF EXISTS orders;
CREATE TABLE orders
(  orderid   INT AUTO_INCREMENT NOT NULL PRIMARY KEY,
   custid    CHAR(10) NOT NULL,
   prodname  CHAR(6) NOT NULL,
   price     INT  NOT NULL,
   amount    SMALLINT  NOT NULL,
   FOREIGN KEY (custid) REFERENCES customer(custid)
);

use smartfactory;

drop table if exists new_user;
create table new_user
(	id varchar(10) not null primary key,
	pw varchar(20) not null,
    name varchar(5) not null,
    gender char(1),
    birthday date not null,
    age int not null
);

use smartfactory;

drop table if exists member;
create table member
(	id varchar(20) not null primary key,
	name varchar(5) not null,
    age int,
    gender varchar(2) not null,
    email varchar(50),
    promotion varchar(2) default "x"
);

alter table member modify id varchar(10);
alter table member drop column age;
alter table member add interest varchar(100);

insert into member (id,name,age,gender,email,promotion) values ('2021','김도현','25','남','kimdhair@naver.com','x');
update member set id='2022' where id='2021';
delete from member where id='2022';

CREATE TABLE new_customer (
    custid CHAR(10) NOT NULL PRIMARY KEY,
    custname VARCHAR(10) NOT NULL,
    addr CHAR(10) NOT NULL,
    phone CHAR(11),
    birth DATE
);

CREATE TABLE new_orders (
    orderid INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    custid CHAR(10) NOT NULL, 
    prodname CHAR(6) NOT NULL,
    price INT NOT NULL,
    amount smallint NOT NULL,
    FOREIGN KEY (custid) REFERENCES new_customer(custid) ON UPDATE CASCADE ON DELETE CASCADE
);

INSERT INTO new_customer VALUES ('kiwi', '김키위', '대한민국 서울', '01012341234', '1990-03-17');
INSERT INTO new_customer VALUES ('apple', '이사과', '대한민국 포항', '01012344321', '1992-06-17');
INSERT INTO new_orders VALUES (NULL, 'kiwi', '프링글스', '3000', 5);
INSERT INTO new_orders VALUES (NULL, 'apple', '프링글스', '3000', 1);
INSERT INTO new_orders VALUES (NULL, 'kiwi', '홈런볼', '2000', 3);